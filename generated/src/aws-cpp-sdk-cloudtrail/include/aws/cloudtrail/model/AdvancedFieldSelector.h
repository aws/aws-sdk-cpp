/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudtrail/CloudTrail_EXPORTS.h>
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
namespace CloudTrail
{
namespace Model
{

  /**
   * <p>A single selector statement in an advanced event selector.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudtrail-2013-11-01/AdvancedFieldSelector">AWS
   * API Reference</a></p>
   */
  class AdvancedFieldSelector
  {
  public:
    AWS_CLOUDTRAIL_API AdvancedFieldSelector() = default;
    AWS_CLOUDTRAIL_API AdvancedFieldSelector(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDTRAIL_API AdvancedFieldSelector& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDTRAIL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> A field in a CloudTrail event record on which to filter events to be logged.
     * For event data stores for CloudTrail Insights events, Config configuration
     * items, Audit Manager evidence, or events outside of Amazon Web Services, the
     * field is used only for selecting events as filtering is not supported.</p>
     * <p>For more information, see <a
     * href="https://docs.aws.amazon.com/awscloudtrail/latest/APIReference/API_AdvancedFieldSelector.html">AdvancedFieldSelector</a>
     * in the <i>CloudTrail API Reference</i>.</p>  <p>Selectors don't support
     * the use of wildcards like <code>*</code> . To match multiple values with a
     * single condition, you may use <code>StartsWith</code>, <code>EndsWith</code>,
     * <code>NotStartsWith</code>, or <code>NotEndsWith</code> to explicitly match the
     * beginning or end of the event field.</p> 
     */
    inline const Aws::String& GetField() const { return m_field; }
    inline bool FieldHasBeenSet() const { return m_fieldHasBeenSet; }
    template<typename FieldT = Aws::String>
    void SetField(FieldT&& value) { m_fieldHasBeenSet = true; m_field = std::forward<FieldT>(value); }
    template<typename FieldT = Aws::String>
    AdvancedFieldSelector& WithField(FieldT&& value) { SetField(std::forward<FieldT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> An operator that includes events that match the exact value of the event
     * record field specified as the value of <code>Field</code>. This is the only
     * valid operator that you can use with the <code>readOnly</code>,
     * <code>eventCategory</code>, and <code>resources.type</code> fields.</p>
     */
    inline const Aws::Vector<Aws::String>& GetEquals() const { return m_equals; }
    inline bool EqualsHasBeenSet() const { return m_equalsHasBeenSet; }
    template<typename EqualsT = Aws::Vector<Aws::String>>
    void SetEquals(EqualsT&& value) { m_equalsHasBeenSet = true; m_equals = std::forward<EqualsT>(value); }
    template<typename EqualsT = Aws::Vector<Aws::String>>
    AdvancedFieldSelector& WithEquals(EqualsT&& value) { SetEquals(std::forward<EqualsT>(value)); return *this;}
    template<typename EqualsT = Aws::String>
    AdvancedFieldSelector& AddEquals(EqualsT&& value) { m_equalsHasBeenSet = true; m_equals.emplace_back(std::forward<EqualsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An operator that includes events that match the first few characters of the
     * event record field specified as the value of <code>Field</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetStartsWith() const { return m_startsWith; }
    inline bool StartsWithHasBeenSet() const { return m_startsWithHasBeenSet; }
    template<typename StartsWithT = Aws::Vector<Aws::String>>
    void SetStartsWith(StartsWithT&& value) { m_startsWithHasBeenSet = true; m_startsWith = std::forward<StartsWithT>(value); }
    template<typename StartsWithT = Aws::Vector<Aws::String>>
    AdvancedFieldSelector& WithStartsWith(StartsWithT&& value) { SetStartsWith(std::forward<StartsWithT>(value)); return *this;}
    template<typename StartsWithT = Aws::String>
    AdvancedFieldSelector& AddStartsWith(StartsWithT&& value) { m_startsWithHasBeenSet = true; m_startsWith.emplace_back(std::forward<StartsWithT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An operator that includes events that match the last few characters of the
     * event record field specified as the value of <code>Field</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetEndsWith() const { return m_endsWith; }
    inline bool EndsWithHasBeenSet() const { return m_endsWithHasBeenSet; }
    template<typename EndsWithT = Aws::Vector<Aws::String>>
    void SetEndsWith(EndsWithT&& value) { m_endsWithHasBeenSet = true; m_endsWith = std::forward<EndsWithT>(value); }
    template<typename EndsWithT = Aws::Vector<Aws::String>>
    AdvancedFieldSelector& WithEndsWith(EndsWithT&& value) { SetEndsWith(std::forward<EndsWithT>(value)); return *this;}
    template<typename EndsWithT = Aws::String>
    AdvancedFieldSelector& AddEndsWith(EndsWithT&& value) { m_endsWithHasBeenSet = true; m_endsWith.emplace_back(std::forward<EndsWithT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> An operator that excludes events that match the exact value of the event
     * record field specified as the value of <code>Field</code>. </p>
     */
    inline const Aws::Vector<Aws::String>& GetNotEquals() const { return m_notEquals; }
    inline bool NotEqualsHasBeenSet() const { return m_notEqualsHasBeenSet; }
    template<typename NotEqualsT = Aws::Vector<Aws::String>>
    void SetNotEquals(NotEqualsT&& value) { m_notEqualsHasBeenSet = true; m_notEquals = std::forward<NotEqualsT>(value); }
    template<typename NotEqualsT = Aws::Vector<Aws::String>>
    AdvancedFieldSelector& WithNotEquals(NotEqualsT&& value) { SetNotEquals(std::forward<NotEqualsT>(value)); return *this;}
    template<typename NotEqualsT = Aws::String>
    AdvancedFieldSelector& AddNotEquals(NotEqualsT&& value) { m_notEqualsHasBeenSet = true; m_notEquals.emplace_back(std::forward<NotEqualsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> An operator that excludes events that match the first few characters of the
     * event record field specified as the value of <code>Field</code>. </p>
     */
    inline const Aws::Vector<Aws::String>& GetNotStartsWith() const { return m_notStartsWith; }
    inline bool NotStartsWithHasBeenSet() const { return m_notStartsWithHasBeenSet; }
    template<typename NotStartsWithT = Aws::Vector<Aws::String>>
    void SetNotStartsWith(NotStartsWithT&& value) { m_notStartsWithHasBeenSet = true; m_notStartsWith = std::forward<NotStartsWithT>(value); }
    template<typename NotStartsWithT = Aws::Vector<Aws::String>>
    AdvancedFieldSelector& WithNotStartsWith(NotStartsWithT&& value) { SetNotStartsWith(std::forward<NotStartsWithT>(value)); return *this;}
    template<typename NotStartsWithT = Aws::String>
    AdvancedFieldSelector& AddNotStartsWith(NotStartsWithT&& value) { m_notStartsWithHasBeenSet = true; m_notStartsWith.emplace_back(std::forward<NotStartsWithT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> An operator that excludes events that match the last few characters of the
     * event record field specified as the value of <code>Field</code>. </p>
     */
    inline const Aws::Vector<Aws::String>& GetNotEndsWith() const { return m_notEndsWith; }
    inline bool NotEndsWithHasBeenSet() const { return m_notEndsWithHasBeenSet; }
    template<typename NotEndsWithT = Aws::Vector<Aws::String>>
    void SetNotEndsWith(NotEndsWithT&& value) { m_notEndsWithHasBeenSet = true; m_notEndsWith = std::forward<NotEndsWithT>(value); }
    template<typename NotEndsWithT = Aws::Vector<Aws::String>>
    AdvancedFieldSelector& WithNotEndsWith(NotEndsWithT&& value) { SetNotEndsWith(std::forward<NotEndsWithT>(value)); return *this;}
    template<typename NotEndsWithT = Aws::String>
    AdvancedFieldSelector& AddNotEndsWith(NotEndsWithT&& value) { m_notEndsWithHasBeenSet = true; m_notEndsWith.emplace_back(std::forward<NotEndsWithT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_field;
    bool m_fieldHasBeenSet = false;

    Aws::Vector<Aws::String> m_equals;
    bool m_equalsHasBeenSet = false;

    Aws::Vector<Aws::String> m_startsWith;
    bool m_startsWithHasBeenSet = false;

    Aws::Vector<Aws::String> m_endsWith;
    bool m_endsWithHasBeenSet = false;

    Aws::Vector<Aws::String> m_notEquals;
    bool m_notEqualsHasBeenSet = false;

    Aws::Vector<Aws::String> m_notStartsWith;
    bool m_notStartsWithHasBeenSet = false;

    Aws::Vector<Aws::String> m_notEndsWith;
    bool m_notEndsWithHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudTrail
} // namespace Aws
