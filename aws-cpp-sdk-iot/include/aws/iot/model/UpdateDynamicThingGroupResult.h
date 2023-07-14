/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>

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
namespace IoT
{
namespace Model
{
  class AWS_IOT_API UpdateDynamicThingGroupResult
  {
  public:
    UpdateDynamicThingGroupResult();
    UpdateDynamicThingGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    UpdateDynamicThingGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The dynamic thing group version.</p>
     */
    inline long long GetVersion() const{ return m_version; }

    /**
     * <p>The dynamic thing group version.</p>
     */
    inline void SetVersion(long long value) { m_version = value; }

    /**
     * <p>The dynamic thing group version.</p>
     */
    inline UpdateDynamicThingGroupResult& WithVersion(long long value) { SetVersion(value); return *this;}

  private:

    long long m_version;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
