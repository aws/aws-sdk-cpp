/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glacier/Glacier_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/glacier/model/ProvisionedCapacityDescription.h>
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
namespace Glacier
{
namespace Model
{
  class ListProvisionedCapacityResult
  {
  public:
    AWS_GLACIER_API ListProvisionedCapacityResult();
    AWS_GLACIER_API ListProvisionedCapacityResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLACIER_API ListProvisionedCapacityResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The response body contains the following JSON fields.</p>
     */
    inline const Aws::Vector<ProvisionedCapacityDescription>& GetProvisionedCapacityList() const{ return m_provisionedCapacityList; }

    /**
     * <p>The response body contains the following JSON fields.</p>
     */
    inline void SetProvisionedCapacityList(const Aws::Vector<ProvisionedCapacityDescription>& value) { m_provisionedCapacityList = value; }

    /**
     * <p>The response body contains the following JSON fields.</p>
     */
    inline void SetProvisionedCapacityList(Aws::Vector<ProvisionedCapacityDescription>&& value) { m_provisionedCapacityList = std::move(value); }

    /**
     * <p>The response body contains the following JSON fields.</p>
     */
    inline ListProvisionedCapacityResult& WithProvisionedCapacityList(const Aws::Vector<ProvisionedCapacityDescription>& value) { SetProvisionedCapacityList(value); return *this;}

    /**
     * <p>The response body contains the following JSON fields.</p>
     */
    inline ListProvisionedCapacityResult& WithProvisionedCapacityList(Aws::Vector<ProvisionedCapacityDescription>&& value) { SetProvisionedCapacityList(std::move(value)); return *this;}

    /**
     * <p>The response body contains the following JSON fields.</p>
     */
    inline ListProvisionedCapacityResult& AddProvisionedCapacityList(const ProvisionedCapacityDescription& value) { m_provisionedCapacityList.push_back(value); return *this; }

    /**
     * <p>The response body contains the following JSON fields.</p>
     */
    inline ListProvisionedCapacityResult& AddProvisionedCapacityList(ProvisionedCapacityDescription&& value) { m_provisionedCapacityList.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<ProvisionedCapacityDescription> m_provisionedCapacityList;
  };

} // namespace Model
} // namespace Glacier
} // namespace Aws
