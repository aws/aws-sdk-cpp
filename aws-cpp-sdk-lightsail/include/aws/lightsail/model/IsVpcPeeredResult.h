/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class IsVpcPeeredResult
  {
  public:
    AWS_LIGHTSAIL_API IsVpcPeeredResult();
    AWS_LIGHTSAIL_API IsVpcPeeredResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LIGHTSAIL_API IsVpcPeeredResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
