/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/areallylongverboseservicenamethatwillcreatealongpath/AreallylongverboseservicenamethatwillcreatealongpathErrorMarshaller.h>
#include <aws/areallylongverboseservicenamethatwillcreatealongpath/AreallylongverboseservicenamethatwillcreatealongpathErrors.h>

using namespace Aws::Client;
using namespace Aws::areallylongverboseservicenamethatwillcreatealongpath;

AWSError<CoreErrors> AreallylongverboseservicenamethatwillcreatealongpathErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = AreallylongverboseservicenamethatwillcreatealongpathErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}