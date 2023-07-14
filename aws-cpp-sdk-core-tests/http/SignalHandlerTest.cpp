/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/external/gtest.h>
#if ENABLE_CURL_CLIENT
#include <signal.h>
#endif

TEST(SignalHandlerTest, RaisingSIGPIPEShouldNotTerminateProcess)
{
#if ENABLE_CURL_CLIENT && !defined (_WIN32)
    ASSERT_EQ(0, raise(SIGPIPE));
#endif
}
