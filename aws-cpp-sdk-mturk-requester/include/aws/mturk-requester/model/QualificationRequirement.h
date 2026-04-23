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
#include <aws/mturk-requester/MTurk_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mturk-requester/model/Comparator.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mturk-requester/model/HITAccessActions.h>
#include <aws/mturk-requester/model/Locale.h>
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
namespace MTurk
{
namespace Model
{

  /**
   * <p> The QualificationRequirement data structure describes a Qualification that a
   * Worker must have before the Worker is allowed to accept a HIT. A requirement may
   * optionally state that a Worker must have the Qualification in order to preview
   * the HIT, or see the HIT in search results. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mturk-requester-2017-01-17/QualificationRequirement">AWS
   * API Reference</a></p>
   */
  class AWS_MTURK_API QualificationRequirement
  {
  public:
    QualificationRequirement();
    QualificationRequirement(Aws::Utils::Json::JsonView jsonValue);
    QualificationRequirement& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The ID of the Qualification type for the requirement.</p>
     */
    inline const Aws::String& GetQualificationTypeId() const{ return m_qualificationTypeId; }

    /**
     * <p> The ID of the Qualification type for the requirement.</p>
     */
    inline bool QualificationTypeIdHasBeenSet() const { return m_qualificationTypeIdHasBeenSet; }

    /**
     * <p> The ID of the Qualification type for the requirement.</p>
     */
    inline void SetQualificationTypeId(const Aws::String& value) { m_qualificationTypeIdHasBeenSet = true; m_qualificationTypeId = value; }

    /**
     * <p> The ID of the Qualification type for the requirement.</p>
     */
    inline void SetQualificationTypeId(Aws::String&& value) { m_qualificationTypeIdHasBeenSet = true; m_qualificationTypeId = std::move(value); }

    /**
     * <p> The ID of the Qualification type for the requirement.</p>
     */
    inline void SetQualificationTypeId(const char* value) { m_qualificationTypeIdHasBeenSet = true; m_qualificationTypeId.assign(value); }

    /**
     * <p> The ID of the Qualification type for the requirement.</p>
     */
    inline QualificationRequirement& WithQualificationTypeId(const Aws::String& value) { SetQualificationTypeId(value); return *this;}

    /**
     * <p> The ID of the Qualification type for the requirement.</p>
     */
    inline QualificationRequirement& WithQualificationTypeId(Aws::String&& value) { SetQualificationTypeId(std::move(value)); return *this;}

    /**
     * <p> The ID of the Qualification type for the requirement.</p>
     */
    inline QualificationRequirement& WithQualificationTypeId(const char* value) { SetQualificationTypeId(value); return *this;}


    /**
     * <p>The kind of comparison to make against a Qualification's value. You can
     * compare a Qualification's value to an IntegerValue to see if it is LessThan,
     * LessThanOrEqualTo, GreaterThan, GreaterThanOrEqualTo, EqualTo, or NotEqualTo the
     * IntegerValue. You can compare it to a LocaleValue to see if it is EqualTo, or
     * NotEqualTo the LocaleValue. You can check to see if the value is In or NotIn a
     * set of IntegerValue or LocaleValue values. Lastly, a Qualification requirement
     * can also test if a Qualification Exists or DoesNotExist in the user's profile,
     * regardless of its value. </p>
     */
    inline const Comparator& GetComparator() const{ return m_comparator; }

    /**
     * <p>The kind of comparison to make against a Qualification's value. You can
     * compare a Qualification's value to an IntegerValue to see if it is LessThan,
     * LessThanOrEqualTo, GreaterThan, GreaterThanOrEqualTo, EqualTo, or NotEqualTo the
     * IntegerValue. You can compare it to a LocaleValue to see if it is EqualTo, or
     * NotEqualTo the LocaleValue. You can check to see if the value is In or NotIn a
     * set of IntegerValue or LocaleValue values. Lastly, a Qualification requirement
     * can also test if a Qualification Exists or DoesNotExist in the user's profile,
     * regardless of its value. </p>
     */
    inline bool ComparatorHasBeenSet() const { return m_comparatorHasBeenSet; }

    /**
     * <p>The kind of comparison to make against a Qualification's value. You can
     * compare a Qualification's value to an IntegerValue to see if it is LessThan,
     * LessThanOrEqualTo, GreaterThan, GreaterThanOrEqualTo, EqualTo, or NotEqualTo the
     * IntegerValue. You can compare it to a LocaleValue to see if it is EqualTo, or
     * NotEqualTo the LocaleValue. You can check to see if the value is In or NotIn a
     * set of IntegerValue or LocaleValue values. Lastly, a Qualification requirement
     * can also test if a Qualification Exists or DoesNotExist in the user's profile,
     * regardless of its value. </p>
     */
    inline void SetComparator(const Comparator& value) { m_comparatorHasBeenSet = true; m_comparator = value; }

    /**
     * <p>The kind of comparison to make against a Qualification's value. You can
     * compare a Qualification's value to an IntegerValue to see if it is LessThan,
     * LessThanOrEqualTo, GreaterThan, GreaterThanOrEqualTo, EqualTo, or NotEqualTo the
     * IntegerValue. You can compare it to a LocaleValue to see if it is EqualTo, or
     * NotEqualTo the LocaleValue. You can check to see if the value is In or NotIn a
     * set of IntegerValue or LocaleValue values. Lastly, a Qualification requirement
     * can also test if a Qualification Exists or DoesNotExist in the user's profile,
     * regardless of its value. </p>
     */
    inline void SetComparator(Comparator&& value) { m_comparatorHasBeenSet = true; m_comparator = std::move(value); }

    /**
     * <p>The kind of comparison to make against a Qualification's value. You can
     * compare a Qualification's value to an IntegerValue to see if it is LessThan,
     * LessThanOrEqualTo, GreaterThan, GreaterThanOrEqualTo, EqualTo, or NotEqualTo the
     * IntegerValue. You can compare it to a LocaleValue to see if it is EqualTo, or
     * NotEqualTo the LocaleValue. You can check to see if the value is In or NotIn a
     * set of IntegerValue or LocaleValue values. Lastly, a Qualification requirement
     * can also test if a Qualification Exists or DoesNotExist in the user's profile,
     * regardless of its value. </p>
     */
    inline QualificationRequirement& WithComparator(const Comparator& value) { SetComparator(value); return *this;}

    /**
     * <p>The kind of comparison to make against a Qualification's value. You can
     * compare a Qualification's value to an IntegerValue to see if it is LessThan,
     * LessThanOrEqualTo, GreaterThan, GreaterThanOrEqualTo, EqualTo, or NotEqualTo the
     * IntegerValue. You can compare it to a LocaleValue to see if it is EqualTo, or
     * NotEqualTo the LocaleValue. You can check to see if the value is In or NotIn a
     * set of IntegerValue or LocaleValue values. Lastly, a Qualification requirement
     * can also test if a Qualification Exists or DoesNotExist in the user's profile,
     * regardless of its value. </p>
     */
    inline QualificationRequirement& WithComparator(Comparator&& value) { SetComparator(std::move(value)); return *this;}


    /**
     * <p> The integer value to compare against the Qualification's value. IntegerValue
     * must not be present if Comparator is Exists or DoesNotExist. IntegerValue can
     * only be used if the Qualification type has an integer value; it cannot be used
     * with the Worker_Locale QualificationType ID. When performing a set comparison by
     * using the In or the NotIn comparator, you can use up to 15 IntegerValue elements
     * in a QualificationRequirement data structure. </p>
     */
    inline const Aws::Vector<int>& GetIntegerValues() const{ return m_integerValues; }

    /**
     * <p> The integer value to compare against the Qualification's value. IntegerValue
     * must not be present if Comparator is Exists or DoesNotExist. IntegerValue can
     * only be used if the Qualification type has an integer value; it cannot be used
     * with the Worker_Locale QualificationType ID. When performing a set comparison by
     * using the In or the NotIn comparator, you can use up to 15 IntegerValue elements
     * in a QualificationRequirement data structure. </p>
     */
    inline bool IntegerValuesHasBeenSet() const { return m_integerValuesHasBeenSet; }

    /**
     * <p> The integer value to compare against the Qualification's value. IntegerValue
     * must not be present if Comparator is Exists or DoesNotExist. IntegerValue can
     * only be used if the Qualification type has an integer value; it cannot be used
     * with the Worker_Locale QualificationType ID. When performing a set comparison by
     * using the In or the NotIn comparator, you can use up to 15 IntegerValue elements
     * in a QualificationRequirement data structure. </p>
     */
    inline void SetIntegerValues(const Aws::Vector<int>& value) { m_integerValuesHasBeenSet = true; m_integerValues = value; }

    /**
     * <p> The integer value to compare against the Qualification's value. IntegerValue
     * must not be present if Comparator is Exists or DoesNotExist. IntegerValue can
     * only be used if the Qualification type has an integer value; it cannot be used
     * with the Worker_Locale QualificationType ID. When performing a set comparison by
     * using the In or the NotIn comparator, you can use up to 15 IntegerValue elements
     * in a QualificationRequirement data structure. </p>
     */
    inline void SetIntegerValues(Aws::Vector<int>&& value) { m_integerValuesHasBeenSet = true; m_integerValues = std::move(value); }

    /**
     * <p> The integer value to compare against the Qualification's value. IntegerValue
     * must not be present if Comparator is Exists or DoesNotExist. IntegerValue can
     * only be used if the Qualification type has an integer value; it cannot be used
     * with the Worker_Locale QualificationType ID. When performing a set comparison by
     * using the In or the NotIn comparator, you can use up to 15 IntegerValue elements
     * in a QualificationRequirement data structure. </p>
     */
    inline QualificationRequirement& WithIntegerValues(const Aws::Vector<int>& value) { SetIntegerValues(value); return *this;}

    /**
     * <p> The integer value to compare against the Qualification's value. IntegerValue
     * must not be present if Comparator is Exists or DoesNotExist. IntegerValue can
     * only be used if the Qualification type has an integer value; it cannot be used
     * with the Worker_Locale QualificationType ID. When performing a set comparison by
     * using the In or the NotIn comparator, you can use up to 15 IntegerValue elements
     * in a QualificationRequirement data structure. </p>
     */
    inline QualificationRequirement& WithIntegerValues(Aws::Vector<int>&& value) { SetIntegerValues(std::move(value)); return *this;}

    /**
     * <p> The integer value to compare against the Qualification's value. IntegerValue
     * must not be present if Comparator is Exists or DoesNotExist. IntegerValue can
     * only be used if the Qualification type has an integer value; it cannot be used
     * with the Worker_Locale QualificationType ID. When performing a set comparison by
     * using the In or the NotIn comparator, you can use up to 15 IntegerValue elements
     * in a QualificationRequirement data structure. </p>
     */
    inline QualificationRequirement& AddIntegerValues(int value) { m_integerValuesHasBeenSet = true; m_integerValues.push_back(value); return *this; }


    /**
     * <p> The locale value to compare against the Qualification's value. The local
     * value must be a valid ISO 3166 country code or supports ISO 3166-2 subdivisions.
     * LocaleValue can only be used with a Worker_Locale QualificationType ID.
     * LocaleValue can only be used with the EqualTo, NotEqualTo, In, and NotIn
     * comparators. You must only use a single LocaleValue element when using the
     * EqualTo or NotEqualTo comparators. When performing a set comparison by using the
     * In or the NotIn comparator, you can use up to 30 LocaleValue elements in a
     * QualificationRequirement data structure. </p>
     */
    inline const Aws::Vector<Locale>& GetLocaleValues() const{ return m_localeValues; }

    /**
     * <p> The locale value to compare against the Qualification's value. The local
     * value must be a valid ISO 3166 country code or supports ISO 3166-2 subdivisions.
     * LocaleValue can only be used with a Worker_Locale QualificationType ID.
     * LocaleValue can only be used with the EqualTo, NotEqualTo, In, and NotIn
     * comparators. You must only use a single LocaleValue element when using the
     * EqualTo or NotEqualTo comparators. When performing a set comparison by using the
     * In or the NotIn comparator, you can use up to 30 LocaleValue elements in a
     * QualificationRequirement data structure. </p>
     */
    inline bool LocaleValuesHasBeenSet() const { return m_localeValuesHasBeenSet; }

    /**
     * <p> The locale value to compare against the Qualification's value. The local
     * value must be a valid ISO 3166 country code or supports ISO 3166-2 subdivisions.
     * LocaleValue can only be used with a Worker_Locale QualificationType ID.
     * LocaleValue can only be used with the EqualTo, NotEqualTo, In, and NotIn
     * comparators. You must only use a single LocaleValue element when using the
     * EqualTo or NotEqualTo comparators. When performing a set comparison by using the
     * In or the NotIn comparator, you can use up to 30 LocaleValue elements in a
     * QualificationRequirement data structure. </p>
     */
    inline void SetLocaleValues(const Aws::Vector<Locale>& value) { m_localeValuesHasBeenSet = true; m_localeValues = value; }

    /**
     * <p> The locale value to compare against the Qualification's value. The local
     * value must be a valid ISO 3166 country code or supports ISO 3166-2 subdivisions.
     * LocaleValue can only be used with a Worker_Locale QualificationType ID.
     * LocaleValue can only be used with the EqualTo, NotEqualTo, In, and NotIn
     * comparators. You must only use a single LocaleValue element when using the
     * EqualTo or NotEqualTo comparators. When performing a set comparison by using the
     * In or the NotIn comparator, you can use up to 30 LocaleValue elements in a
     * QualificationRequirement data structure. </p>
     */
    inline void SetLocaleValues(Aws::Vector<Locale>&& value) { m_localeValuesHasBeenSet = true; m_localeValues = std::move(value); }

    /**
     * <p> The locale value to compare against the Qualification's value. The local
     * value must be a valid ISO 3166 country code or supports ISO 3166-2 subdivisions.
     * LocaleValue can only be used with a Worker_Locale QualificationType ID.
     * LocaleValue can only be used with the EqualTo, NotEqualTo, In, and NotIn
     * comparators. You must only use a single LocaleValue element when using the
     * EqualTo or NotEqualTo comparators. When performing a set comparison by using the
     * In or the NotIn comparator, you can use up to 30 LocaleValue elements in a
     * QualificationRequirement data structure. </p>
     */
    inline QualificationRequirement& WithLocaleValues(const Aws::Vector<Locale>& value) { SetLocaleValues(value); return *this;}

    /**
     * <p> The locale value to compare against the Qualification's value. The local
     * value must be a valid ISO 3166 country code or supports ISO 3166-2 subdivisions.
     * LocaleValue can only be used with a Worker_Locale QualificationType ID.
     * LocaleValue can only be used with the EqualTo, NotEqualTo, In, and NotIn
     * comparators. You must only use a single LocaleValue element when using the
     * EqualTo or NotEqualTo comparators. When performing a set comparison by using the
     * In or the NotIn comparator, you can use up to 30 LocaleValue elements in a
     * QualificationRequirement data structure. </p>
     */
    inline QualificationRequirement& WithLocaleValues(Aws::Vector<Locale>&& value) { SetLocaleValues(std::move(value)); return *this;}

    /**
     * <p> The locale value to compare against the Qualification's value. The local
     * value must be a valid ISO 3166 country code or supports ISO 3166-2 subdivisions.
     * LocaleValue can only be used with a Worker_Locale QualificationType ID.
     * LocaleValue can only be used with the EqualTo, NotEqualTo, In, and NotIn
     * comparators. You must only use a single LocaleValue element when using the
     * EqualTo or NotEqualTo comparators. When performing a set comparison by using the
     * In or the NotIn comparator, you can use up to 30 LocaleValue elements in a
     * QualificationRequirement data structure. </p>
     */
    inline QualificationRequirement& AddLocaleValues(const Locale& value) { m_localeValuesHasBeenSet = true; m_localeValues.push_back(value); return *this; }

    /**
     * <p> The locale value to compare against the Qualification's value. The local
     * value must be a valid ISO 3166 country code or supports ISO 3166-2 subdivisions.
     * LocaleValue can only be used with a Worker_Locale QualificationType ID.
     * LocaleValue can only be used with the EqualTo, NotEqualTo, In, and NotIn
     * comparators. You must only use a single LocaleValue element when using the
     * EqualTo or NotEqualTo comparators. When performing a set comparison by using the
     * In or the NotIn comparator, you can use up to 30 LocaleValue elements in a
     * QualificationRequirement data structure. </p>
     */
    inline QualificationRequirement& AddLocaleValues(Locale&& value) { m_localeValuesHasBeenSet = true; m_localeValues.push_back(std::move(value)); return *this; }


    /**
     * <p> Setting this attribute prevents Workers whose Qualifications do not meet
     * this QualificationRequirement from taking the specified action. Valid arguments
     * include "Accept" (Worker cannot accept the HIT, but can preview the HIT and see
     * it in their search results), "PreviewAndAccept" (Worker cannot accept or preview
     * the HIT, but can see the HIT in their search results), and
     * "DiscoverPreviewAndAccept" (Worker cannot accept, preview, or see the HIT in
     * their search results). It's possible for you to create a HIT with multiple
     * QualificationRequirements (which can have different values for the ActionGuarded
     * attribute). In this case, the Worker is only permitted to perform an action when
     * they have met all QualificationRequirements guarding the action. The actions in
     * the order of least restrictive to most restrictive are Discover, Preview and
     * Accept. For example, if a Worker meets all QualificationRequirements that are
     * set to DiscoverPreviewAndAccept, but do not meet all requirements that are set
     * with PreviewAndAccept, then the Worker will be able to Discover, i.e. see the
     * HIT in their search result, but will not be able to Preview or Accept the HIT.
     * ActionsGuarded should not be used in combination with the
     * <code>RequiredToPreview</code> field. </p>
     */
    inline const HITAccessActions& GetActionsGuarded() const{ return m_actionsGuarded; }

    /**
     * <p> Setting this attribute prevents Workers whose Qualifications do not meet
     * this QualificationRequirement from taking the specified action. Valid arguments
     * include "Accept" (Worker cannot accept the HIT, but can preview the HIT and see
     * it in their search results), "PreviewAndAccept" (Worker cannot accept or preview
     * the HIT, but can see the HIT in their search results), and
     * "DiscoverPreviewAndAccept" (Worker cannot accept, preview, or see the HIT in
     * their search results). It's possible for you to create a HIT with multiple
     * QualificationRequirements (which can have different values for the ActionGuarded
     * attribute). In this case, the Worker is only permitted to perform an action when
     * they have met all QualificationRequirements guarding the action. The actions in
     * the order of least restrictive to most restrictive are Discover, Preview and
     * Accept. For example, if a Worker meets all QualificationRequirements that are
     * set to DiscoverPreviewAndAccept, but do not meet all requirements that are set
     * with PreviewAndAccept, then the Worker will be able to Discover, i.e. see the
     * HIT in their search result, but will not be able to Preview or Accept the HIT.
     * ActionsGuarded should not be used in combination with the
     * <code>RequiredToPreview</code> field. </p>
     */
    inline bool ActionsGuardedHasBeenSet() const { return m_actionsGuardedHasBeenSet; }

    /**
     * <p> Setting this attribute prevents Workers whose Qualifications do not meet
     * this QualificationRequirement from taking the specified action. Valid arguments
     * include "Accept" (Worker cannot accept the HIT, but can preview the HIT and see
     * it in their search results), "PreviewAndAccept" (Worker cannot accept or preview
     * the HIT, but can see the HIT in their search results), and
     * "DiscoverPreviewAndAccept" (Worker cannot accept, preview, or see the HIT in
     * their search results). It's possible for you to create a HIT with multiple
     * QualificationRequirements (which can have different values for the ActionGuarded
     * attribute). In this case, the Worker is only permitted to perform an action when
     * they have met all QualificationRequirements guarding the action. The actions in
     * the order of least restrictive to most restrictive are Discover, Preview and
     * Accept. For example, if a Worker meets all QualificationRequirements that are
     * set to DiscoverPreviewAndAccept, but do not meet all requirements that are set
     * with PreviewAndAccept, then the Worker will be able to Discover, i.e. see the
     * HIT in their search result, but will not be able to Preview or Accept the HIT.
     * ActionsGuarded should not be used in combination with the
     * <code>RequiredToPreview</code> field. </p>
     */
    inline void SetActionsGuarded(const HITAccessActions& value) { m_actionsGuardedHasBeenSet = true; m_actionsGuarded = value; }

    /**
     * <p> Setting this attribute prevents Workers whose Qualifications do not meet
     * this QualificationRequirement from taking the specified action. Valid arguments
     * include "Accept" (Worker cannot accept the HIT, but can preview the HIT and see
     * it in their search results), "PreviewAndAccept" (Worker cannot accept or preview
     * the HIT, but can see the HIT in their search results), and
     * "DiscoverPreviewAndAccept" (Worker cannot accept, preview, or see the HIT in
     * their search results). It's possible for you to create a HIT with multiple
     * QualificationRequirements (which can have different values for the ActionGuarded
     * attribute). In this case, the Worker is only permitted to perform an action when
     * they have met all QualificationRequirements guarding the action. The actions in
     * the order of least restrictive to most restrictive are Discover, Preview and
     * Accept. For example, if a Worker meets all QualificationRequirements that are
     * set to DiscoverPreviewAndAccept, but do not meet all requirements that are set
     * with PreviewAndAccept, then the Worker will be able to Discover, i.e. see the
     * HIT in their search result, but will not be able to Preview or Accept the HIT.
     * ActionsGuarded should not be used in combination with the
     * <code>RequiredToPreview</code> field. </p>
     */
    inline void SetActionsGuarded(HITAccessActions&& value) { m_actionsGuardedHasBeenSet = true; m_actionsGuarded = std::move(value); }

    /**
     * <p> Setting this attribute prevents Workers whose Qualifications do not meet
     * this QualificationRequirement from taking the specified action. Valid arguments
     * include "Accept" (Worker cannot accept the HIT, but can preview the HIT and see
     * it in their search results), "PreviewAndAccept" (Worker cannot accept or preview
     * the HIT, but can see the HIT in their search results), and
     * "DiscoverPreviewAndAccept" (Worker cannot accept, preview, or see the HIT in
     * their search results). It's possible for you to create a HIT with multiple
     * QualificationRequirements (which can have different values for the ActionGuarded
     * attribute). In this case, the Worker is only permitted to perform an action when
     * they have met all QualificationRequirements guarding the action. The actions in
     * the order of least restrictive to most restrictive are Discover, Preview and
     * Accept. For example, if a Worker meets all QualificationRequirements that are
     * set to DiscoverPreviewAndAccept, but do not meet all requirements that are set
     * with PreviewAndAccept, then the Worker will be able to Discover, i.e. see the
     * HIT in their search result, but will not be able to Preview or Accept the HIT.
     * ActionsGuarded should not be used in combination with the
     * <code>RequiredToPreview</code> field. </p>
     */
    inline QualificationRequirement& WithActionsGuarded(const HITAccessActions& value) { SetActionsGuarded(value); return *this;}

    /**
     * <p> Setting this attribute prevents Workers whose Qualifications do not meet
     * this QualificationRequirement from taking the specified action. Valid arguments
     * include "Accept" (Worker cannot accept the HIT, but can preview the HIT and see
     * it in their search results), "PreviewAndAccept" (Worker cannot accept or preview
     * the HIT, but can see the HIT in their search results), and
     * "DiscoverPreviewAndAccept" (Worker cannot accept, preview, or see the HIT in
     * their search results). It's possible for you to create a HIT with multiple
     * QualificationRequirements (which can have different values for the ActionGuarded
     * attribute). In this case, the Worker is only permitted to perform an action when
     * they have met all QualificationRequirements guarding the action. The actions in
     * the order of least restrictive to most restrictive are Discover, Preview and
     * Accept. For example, if a Worker meets all QualificationRequirements that are
     * set to DiscoverPreviewAndAccept, but do not meet all requirements that are set
     * with PreviewAndAccept, then the Worker will be able to Discover, i.e. see the
     * HIT in their search result, but will not be able to Preview or Accept the HIT.
     * ActionsGuarded should not be used in combination with the
     * <code>RequiredToPreview</code> field. </p>
     */
    inline QualificationRequirement& WithActionsGuarded(HITAccessActions&& value) { SetActionsGuarded(std::move(value)); return *this;}

  private:

    Aws::String m_qualificationTypeId;
    bool m_qualificationTypeIdHasBeenSet;

    Comparator m_comparator;
    bool m_comparatorHasBeenSet;

    Aws::Vector<int> m_integerValues;
    bool m_integerValuesHasBeenSet;

    Aws::Vector<Locale> m_localeValues;
    bool m_localeValuesHasBeenSet;

    HITAccessActions m_actionsGuarded;
    bool m_actionsGuardedHasBeenSet;
  };

} // namespace Model
} // namespace MTurk
} // namespace Aws
