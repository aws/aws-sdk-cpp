#!/bin/sh
# RPM post-install script for AWS SDK C++
# Updates the shared library cache after installation

# Run ldconfig to update the shared library cache
if [ -x /sbin/ldconfig ]; then
    /sbin/ldconfig
fi

exit 0
