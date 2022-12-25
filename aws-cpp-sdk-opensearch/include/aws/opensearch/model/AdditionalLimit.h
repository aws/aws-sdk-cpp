/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace OpenSearchService
{
namespace Model
{

  /**
   * <p> List of limits that are specific to a given instance type.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/AdditionalLimit">AWS
   * API Reference</a></p>
   */
  class AdditionalLimit
  {
  public:
    AWS_OPENSEARCHSERVICE_API AdditionalLimit();
    AWS_OPENSEARCHSERVICE_API AdditionalLimit(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API AdditionalLimit& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <ul> <li> <p> <code>MaximumNumberOfDataNodesSupported</code> - This attribute
     * only applies to master nodes and specifies the maximum number of data nodes of a
     * given instance type a master node can support.</p> </li> <li> <p>
     * <code>MaximumNumberOfDataNodesWithoutMasterNode</code> - This attribute only
     * applies to data nodes and specifies the maximum number of data nodes of a given
     * instance type can exist without a master node governing them.</p> </li> </ul>
     */
    inline const Aws::String& GetLimitName() const{ return m_limitName; }

    /**
     * <ul> <li> <p> <code>MaximumNumberOfDataNodesSupported</code> - This attribute
     * only applies to master nodes and specifies the maximum number of data nodes of a
     * given instance type a master node can support.</p> </li> <li> <p>
     * <code>MaximumNumberOfDataNodesWithoutMasterNode</code> - This attribute only
     * applies to data nodes and specifies the maximum number of data nodes of a given
     * instance type can exist without a master node governing them.</p> </li> </ul>
     */
    inline bool LimitNameHasBeenSet() const { return m_limitNameHasBeenSet; }

    /**
     * <ul> <li> <p> <code>MaximumNumberOfDataNodesSupported</code> - This attribute
     * only applies to master nodes and specifies the maximum number of data nodes of a
     * given instance type a master node can support.</p> </li> <li> <p>
     * <code>MaximumNumberOfDataNodesWithoutMasterNode</code> - This attribute only
     * applies to data nodes and specifies the maximum number of data nodes of a given
     * instance type can exist without a master node governing them.</p> </li> </ul>
     */
    inline void SetLimitName(const Aws::String& value) { m_limitNameHasBeenSet = true; m_limitName = value; }

    /**
     * <ul> <li> <p> <code>MaximumNumberOfDataNodesSupported</code> - This attribute
     * only applies to master nodes and specifies the maximum number of data nodes of a
     * given instance type a master node can support.</p> </li> <li> <p>
     * <code>MaximumNumberOfDataNodesWithoutMasterNode</code> - This attribute only
     * applies to data nodes and specifies the maximum number of data nodes of a given
     * instance type can exist without a master node governing them.</p> </li> </ul>
     */
    inline void SetLimitName(Aws::String&& value) { m_limitNameHasBeenSet = true; m_limitName = std::move(value); }

    /**
     * <ul> <li> <p> <code>MaximumNumberOfDataNodesSupported</code> - This attribute
     * only applies to master nodes and specifies the maximum number of data nodes of a
     * given instance type a master node can support.</p> </li> <li> <p>
     * <code>MaximumNumberOfDataNodesWithoutMasterNode</code> - This attribute only
     * applies to data nodes and specifies the maximum number of data nodes of a given
     * instance type can exist without a master node governing them.</p> </li> </ul>
     */
    inline void SetLimitName(const char* value) { m_limitNameHasBeenSet = true; m_limitName.assign(value); }

    /**
     * <ul> <li> <p> <code>MaximumNumberOfDataNodesSupported</code> - This attribute
     * only applies to master nodes and specifies the maximum number of data nodes of a
     * given instance type a master node can support.</p> </li> <li> <p>
     * <code>MaximumNumberOfDataNodesWithoutMasterNode</code> - This attribute only
     * applies to data nodes and specifies the maximum number of data nodes of a given
     * instance type can exist without a master node governing them.</p> </li> </ul>
     */
    inline AdditionalLimit& WithLimitName(const Aws::String& value) { SetLimitName(value); return *this;}

    /**
     * <ul> <li> <p> <code>MaximumNumberOfDataNodesSupported</code> - This attribute
     * only applies to master nodes and specifies the maximum number of data nodes of a
     * given instance type a master node can support.</p> </li> <li> <p>
     * <code>MaximumNumberOfDataNodesWithoutMasterNode</code> - This attribute only
     * applies to data nodes and specifies the maximum number of data nodes of a given
     * instance type can exist without a master node governing them.</p> </li> </ul>
     */
    inline AdditionalLimit& WithLimitName(Aws::String&& value) { SetLimitName(std::move(value)); return *this;}

    /**
     * <ul> <li> <p> <code>MaximumNumberOfDataNodesSupported</code> - This attribute
     * only applies to master nodes and specifies the maximum number of data nodes of a
     * given instance type a master node can support.</p> </li> <li> <p>
     * <code>MaximumNumberOfDataNodesWithoutMasterNode</code> - This attribute only
     * applies to data nodes and specifies the maximum number of data nodes of a given
     * instance type can exist without a master node governing them.</p> </li> </ul>
     */
    inline AdditionalLimit& WithLimitName(const char* value) { SetLimitName(value); return *this;}


    /**
     * <p> The values of the additional instance type limits.</p>
     */
    inline const Aws::Vector<Aws::String>& GetLimitValues() const{ return m_limitValues; }

    /**
     * <p> The values of the additional instance type limits.</p>
     */
    inline bool LimitValuesHasBeenSet() const { return m_limitValuesHasBeenSet; }

    /**
     * <p> The values of the additional instance type limits.</p>
     */
    inline void SetLimitValues(const Aws::Vector<Aws::String>& value) { m_limitValuesHasBeenSet = true; m_limitValues = value; }

    /**
     * <p> The values of the additional instance type limits.</p>
     */
    inline void SetLimitValues(Aws::Vector<Aws::String>&& value) { m_limitValuesHasBeenSet = true; m_limitValues = std::move(value); }

    /**
     * <p> The values of the additional instance type limits.</p>
     */
    inline AdditionalLimit& WithLimitValues(const Aws::Vector<Aws::String>& value) { SetLimitValues(value); return *this;}

    /**
     * <p> The values of the additional instance type limits.</p>
     */
    inline AdditionalLimit& WithLimitValues(Aws::Vector<Aws::String>&& value) { SetLimitValues(std::move(value)); return *this;}

    /**
     * <p> The values of the additional instance type limits.</p>
     */
    inline AdditionalLimit& AddLimitValues(const Aws::String& value) { m_limitValuesHasBeenSet = true; m_limitValues.push_back(value); return *this; }

    /**
     * <p> The values of the additional instance type limits.</p>
     */
    inline AdditionalLimit& AddLimitValues(Aws::String&& value) { m_limitValuesHasBeenSet = true; m_limitValues.push_back(std::move(value)); return *this; }

    /**
     * <p> The values of the additional instance type limits.</p>
     */
    inline AdditionalLimit& AddLimitValues(const char* value) { m_limitValuesHasBeenSet = true; m_limitValues.push_back(value); return *this; }

  private:

    Aws::String m_limitName;
    bool m_limitNameHasBeenSet = false;

    Aws::Vector<Aws::String> m_limitValues;
    bool m_limitValuesHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
