/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/lightsail/Lightsail_EXPORTS.h>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Lightsail
{
namespace Model
{
  class AWS_LIGHTSAIL_API IsVpcPeeredResult
  {
  public:
    IsVpcPeeredResult();
    IsVpcPeeredResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    IsVpcPeeredResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Returns <code>true</code> if the Lightsail VPC is peered; otherwise,
     * <code>false</code>.</p>
     */
    inline bool GetIsPeered() const{ return m_isPeered; }

    /**
     * <p>Returns <code>true</code> if the Lightsail VPC is peered; otherwise,
     * <code>false</code>.</p>
     */
    inline void SetIsPeered(bool value) { m_isPeered = value; }

    /**
     * <p>Returns <code>true</code> if the Lightsail VPC is peered; otherwise,
     * <code>false</code>.</p>
     */
    inline IsVpcPeeredResult& WithIsPeered(bool value) { SetIsPeered(value); return *this;}

  private:

    bool m_isPeered;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
