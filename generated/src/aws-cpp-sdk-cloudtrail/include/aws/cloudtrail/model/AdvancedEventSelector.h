/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudtrail/CloudTrail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cloudtrail/model/AdvancedFieldSelector.h>
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
namespace CloudTrail
{
namespace Model
{

  /**
   * <p>Advanced event selectors let you create fine-grained selectors for CloudTrail
   * management, data, and network activity events. They help you control costs by
   * logging only those events that are important to you. For more information about
   * configuring advanced event selectors, see the <a
   * href="https://docs.aws.amazon.com/awscloudtrail/latest/userguide/logging-data-events-with-cloudtrail.html">Logging
   * data events</a>, <a
   * href="https://docs.aws.amazon.com/awscloudtrail/latest/userguide/logging-network-events-with-cloudtrail.html">Logging
   * network activity events</a>, and <a
   * href="https://docs.aws.amazon.com/awscloudtrail/latest/userguide/logging-management-events-with-cloudtrail.html">Logging
   * management events</a> topics in the <i>CloudTrail User Guide</i>.</p> <p>You
   * cannot apply both event selectors and advanced event selectors to a trail.</p>
   * <p>For information about configurable advanced event selector fields, see <a
   * href="https://docs.aws.amazon.com/awscloudtrail/latest/APIReference/API_AdvancedEventSelector.html">AdvancedEventSelector</a>
   * in the <i>CloudTrailUser Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudtrail-2013-11-01/AdvancedEventSelector">AWS
   * API Reference</a></p>
   */
  class AdvancedEventSelector
  {
  public:
    AWS_CLOUDTRAIL_API AdvancedEventSelector();
    AWS_CLOUDTRAIL_API AdvancedEventSelector(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDTRAIL_API AdvancedEventSelector& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDTRAIL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An optional, descriptive name for an advanced event selector, such as "Log
     * data events for only two S3 buckets".</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline AdvancedEventSelector& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline AdvancedEventSelector& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline AdvancedEventSelector& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains all selector statements in an advanced event selector.</p>
     */
    inline const Aws::Vector<AdvancedFieldSelector>& GetFieldSelectors() const{ return m_fieldSelectors; }
    inline bool FieldSelectorsHasBeenSet() const { return m_fieldSelectorsHasBeenSet; }
    inline void SetFieldSelectors(const Aws::Vector<AdvancedFieldSelector>& value) { m_fieldSelectorsHasBeenSet = true; m_fieldSelectors = value; }
    inline void SetFieldSelectors(Aws::Vector<AdvancedFieldSelector>&& value) { m_fieldSelectorsHasBeenSet = true; m_fieldSelectors = std::move(value); }
    inline AdvancedEventSelector& WithFieldSelectors(const Aws::Vector<AdvancedFieldSelector>& value) { SetFieldSelectors(value); return *this;}
    inline AdvancedEventSelector& WithFieldSelectors(Aws::Vector<AdvancedFieldSelector>&& value) { SetFieldSelectors(std::move(value)); return *this;}
    inline AdvancedEventSelector& AddFieldSelectors(const AdvancedFieldSelector& value) { m_fieldSelectorsHasBeenSet = true; m_fieldSelectors.push_back(value); return *this; }
    inline AdvancedEventSelector& AddFieldSelectors(AdvancedFieldSelector&& value) { m_fieldSelectorsHasBeenSet = true; m_fieldSelectors.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<AdvancedFieldSelector> m_fieldSelectors;
    bool m_fieldSelectorsHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudTrail
} // namespace Aws
