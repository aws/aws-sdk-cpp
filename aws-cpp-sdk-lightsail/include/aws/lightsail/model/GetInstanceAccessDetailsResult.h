/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/lightsail/model/InstanceAccessDetails.h>
#include <utility>

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
  class GetInstanceAccessDetailsResult
  {
  public:
    AWS_LIGHTSAIL_API GetInstanceAccessDetailsResult();
    AWS_LIGHTSAIL_API GetInstanceAccessDetailsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LIGHTSAIL_API GetInstanceAccessDetailsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An array of key-value pairs containing information about a get instance
     * access request.</p>
     */
    inline const InstanceAccessDetails& GetAccessDetails() const{ return m_accessDetails; }

    /**
     * <p>An array of key-value pairs containing information about a get instance
     * access request.</p>
     */
    inline void SetAccessDetails(const InstanceAccessDetails& value) { m_accessDetails = value; }

    /**
     * <p>An array of key-value pairs containing information about a get instance
     * access request.</p>
     */
    inline void SetAccessDetails(InstanceAccessDetails&& value) { m_accessDetails = std::move(value); }

    /**
     * <p>An array of key-value pairs containing information about a get instance
     * access request.</p>
     */
    inline GetInstanceAccessDetailsResult& WithAccessDetails(const InstanceAccessDetails& value) { SetAccessDetails(value); return *this;}

    /**
     * <p>An array of key-value pairs containing information about a get instance
     * access request.</p>
     */
    inline GetInstanceAccessDetailsResult& WithAccessDetails(InstanceAccessDetails&& value) { SetAccessDetails(std::move(value)); return *this;}

  private:

    InstanceAccessDetails m_accessDetails;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
