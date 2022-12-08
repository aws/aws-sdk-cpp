/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudhsm/CloudHSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace CloudHSM
{
namespace Model
{
  class ListAvailableZonesResult
  {
  public:
    AWS_CLOUDHSM_API ListAvailableZonesResult();
    AWS_CLOUDHSM_API ListAvailableZonesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDHSM_API ListAvailableZonesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The list of Availability Zones that have available AWS CloudHSM capacity.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAZList() const{ return m_aZList; }

    /**
     * <p>The list of Availability Zones that have available AWS CloudHSM capacity.</p>
     */
    inline void SetAZList(const Aws::Vector<Aws::String>& value) { m_aZList = value; }

    /**
     * <p>The list of Availability Zones that have available AWS CloudHSM capacity.</p>
     */
    inline void SetAZList(Aws::Vector<Aws::String>&& value) { m_aZList = std::move(value); }

    /**
     * <p>The list of Availability Zones that have available AWS CloudHSM capacity.</p>
     */
    inline ListAvailableZonesResult& WithAZList(const Aws::Vector<Aws::String>& value) { SetAZList(value); return *this;}

    /**
     * <p>The list of Availability Zones that have available AWS CloudHSM capacity.</p>
     */
    inline ListAvailableZonesResult& WithAZList(Aws::Vector<Aws::String>&& value) { SetAZList(std::move(value)); return *this;}

    /**
     * <p>The list of Availability Zones that have available AWS CloudHSM capacity.</p>
     */
    inline ListAvailableZonesResult& AddAZList(const Aws::String& value) { m_aZList.push_back(value); return *this; }

    /**
     * <p>The list of Availability Zones that have available AWS CloudHSM capacity.</p>
     */
    inline ListAvailableZonesResult& AddAZList(Aws::String&& value) { m_aZList.push_back(std::move(value)); return *this; }

    /**
     * <p>The list of Availability Zones that have available AWS CloudHSM capacity.</p>
     */
    inline ListAvailableZonesResult& AddAZList(const char* value) { m_aZList.push_back(value); return *this; }

  private:

    Aws::Vector<Aws::String> m_aZList;
  };

} // namespace Model
} // namespace CloudHSM
} // namespace Aws
