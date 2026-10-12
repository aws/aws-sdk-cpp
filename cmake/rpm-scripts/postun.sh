#!/bin/sh
# RPM post-uninstall script for AWS SDK C++
# Updates the shared library cache after uninstallation

# Run ldconfig to update the shared library cache
if [ -x /sbin/ldconfig ]; then
    /sbin/ldconfig
fi

exit 0
