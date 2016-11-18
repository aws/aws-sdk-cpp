﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#pragma once
#include <aws/sqs/SQS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace SQS
{
namespace Model
{

  class AWS_SQS_API ResponseMetadata
  {
  public:
    ResponseMetadata();
    ResponseMetadata(const Aws::Utils::Xml::XmlNode& xmlNode);
    ResponseMetadata& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;

    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestIdHasBeenSet = true; m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestIdHasBeenSet = true; m_requestId = value; }

    
    inline void SetRequestId(const char* value) { m_requestIdHasBeenSet = true; m_requestId.assign(value); }

    
    inline ResponseMetadata& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ResponseMetadata& WithRequestId(Aws::String&& value) { SetRequestId(value); return *this;}

    
    inline ResponseMetadata& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:
    Aws::String m_requestId;
    bool m_requestIdHasBeenSet;
  };

} // namespace Model
} // namespace SQS
} // namespace Aws
