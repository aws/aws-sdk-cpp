FROM       ubuntu:18.04

RUN apt-get update

RUN apt-get install -y openssh-server sshpass
RUN mkdir /var/run/sshd

RUN echo 'root:root' |chpasswd

RUN sed -ri 's/^#?PermitRootLogin\s+.*/PermitRootLogin yes/' /etc/ssh/sshd_config
RUN sed -ri 's/UsePAM yes/#UsePAM yes/g' /etc/ssh/sshd_config

RUN mkdir /root/.ssh

RUN echo '#!/bin/bash\n\
\n\
/usr/sbin/sshd -d &\n\
sshpass -p root ssh -N -D 0.0.0.0:1080 root@localhost -o GatewayPorts=yes -o StrictHostKeyChecking=no -vvv\n'\
>> start.sh

RUN ["chmod", "+x", "/start.sh"]

EXPOSE 1080

ENTRYPOINT ["./start.sh"]