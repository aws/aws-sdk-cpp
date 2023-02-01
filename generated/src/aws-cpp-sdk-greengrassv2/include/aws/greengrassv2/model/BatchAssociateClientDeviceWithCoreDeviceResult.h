/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/greengrassv2/GreengrassV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/greengrassv2/model/AssociateClientDeviceWithCoreDeviceErrorEntry.h>
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
namespace GreengrassV2
{
namespace Model
{
  class BatchAssociateClientDeviceWithCoreDeviceResult
  {
  public:
    AWS_GREENGRASSV2_API BatchAssociateClientDeviceWithCoreDeviceResult();
    AWS_GREENGRASSV2_API BatchAssociateClientDeviceWithCoreDeviceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GREENGRASSV2_API BatchAssociateClientDeviceWithCoreDeviceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The list of any errors for the entries in the request. Each error entry
     * contains the name of the IoT thing that failed to associate.</p>
     */
    inline const Aws::Vector<AssociateClientDeviceWithCoreDeviceErrorEntry>& GetErrorEntries() const{ return m_errorEntries; }

    /**
     * <p>The list of any errors for the entries in the request. Each error entry
     * contains the name of the IoT thing that failed to associate.</p>
     */
    inline void SetErrorEntries(const Aws::Vector<AssociateClientDeviceWithCoreDeviceErrorEntry>& value) { m_errorEntries = value; }

    /**
     * <p>The list of any errors for the entries in the request. Each error entry
     * contains the name of the IoT thing that failed to associate.</p>
     */
    inline void SetErrorEntries(Aws::Vector<AssociateClientDeviceWithCoreDeviceErrorEntry>&& value) { m_errorEntries = std::move(value); }

    /**
     * <p>The list of any errors for the entries in the request. Each error entry
     * contains the name of the IoT thing that failed to associate.</p>
     */
    inline BatchAssociateClientDeviceWithCoreDeviceResult& WithErrorEntries(const Aws::Vector<AssociateClientDeviceWithCoreDeviceErrorEntry>& value) { SetErrorEntries(value); return *this;}

    /**
     * <p>The list of any errors for the entries in the request. Each error entry
     * contains the name of the IoT thing that failed to associate.</p>
     */
    inline BatchAssociateClientDeviceWithCoreDeviceResult& WithErrorEntries(Aws::Vector<AssociateClientDeviceWithCoreDeviceErrorEntry>&& value) { SetErrorEntries(std::move(value)); return *this;}

    /**
     * <p>The list of any errors for the entries in the request. Each error entry
     * contains the name of the IoT thing that failed to associate.</p>
     */
    inline BatchAssociateClientDeviceWithCoreDeviceResult& AddErrorEntries(const AssociateClientDeviceWithCoreDeviceErrorEntry& value) { m_errorEntries.push_back(value); return *this; }

    /**
     * <p>The list of any errors for the entries in the request. Each error entry
     * contains the name of the IoT thing that failed to associate.</p>
     */
    inline BatchAssociateClientDeviceWithCoreDeviceResult& AddErrorEntries(AssociateClientDeviceWithCoreDeviceErrorEntry&& value) { m_errorEntries.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<AssociateClientDeviceWithCoreDeviceErrorEntry> m_errorEntries;
  };

} // namespace Model
} // namespace GreengrassV2
} // namespace Aws
