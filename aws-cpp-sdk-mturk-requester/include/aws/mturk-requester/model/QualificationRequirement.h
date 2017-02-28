/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/mturk-requester/model/Locale.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
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
   * the HIT. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mturk-requester-2017-01-17/QualificationRequirement">AWS
   * API Reference</a></p>
   */
  class AWS_MTURK_API QualificationRequirement
  {
  public:
    QualificationRequirement();
    QualificationRequirement(const Aws::Utils::Json::JsonValue& jsonValue);
    QualificationRequirement& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p> The ID of the Qualification type for the requirement.</p>
     */
    inline const Aws::String& GetQualificationTypeId() const{ return m_qualificationTypeId; }

    /**
     * <p> The ID of the Qualification type for the requirement.</p>
     */
    inline void SetQualificationTypeId(const Aws::String& value) { m_qualificationTypeIdHasBeenSet = true; m_qualificationTypeId = value; }

    /**
     * <p> The ID of the Qualification type for the requirement.</p>
     */
    inline void SetQualificationTypeId(Aws::String&& value) { m_qualificationTypeIdHasBeenSet = true; m_qualificationTypeId = value; }

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
    inline QualificationRequirement& WithQualificationTypeId(Aws::String&& value) { SetQualificationTypeId(value); return *this;}

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
    inline void SetComparator(Comparator&& value) { m_comparatorHasBeenSet = true; m_comparator = value; }

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
    inline QualificationRequirement& WithComparator(Comparator&& value) { SetComparator(value); return *this;}

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
    inline void SetIntegerValues(const Aws::Vector<int>& value) { m_integerValuesHasBeenSet = true; m_integerValues = value; }

    /**
     * <p> The integer value to compare against the Qualification's value. IntegerValue
     * must not be present if Comparator is Exists or DoesNotExist. IntegerValue can
     * only be used if the Qualification type has an integer value; it cannot be used
     * with the Worker_Locale QualificationType ID. When performing a set comparison by
     * using the In or the NotIn comparator, you can use up to 15 IntegerValue elements
     * in a QualificationRequirement data structure. </p>
     */
    inline void SetIntegerValues(Aws::Vector<int>&& value) { m_integerValuesHasBeenSet = true; m_integerValues = value; }

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
    inline QualificationRequirement& WithIntegerValues(Aws::Vector<int>&& value) { SetIntegerValues(value); return *this;}

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
    inline void SetLocaleValues(Aws::Vector<Locale>&& value) { m_localeValuesHasBeenSet = true; m_localeValues = value; }

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
    inline QualificationRequirement& WithLocaleValues(Aws::Vector<Locale>&& value) { SetLocaleValues(value); return *this;}

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
    inline QualificationRequirement& AddLocaleValues(Locale&& value) { m_localeValuesHasBeenSet = true; m_localeValues.push_back(value); return *this; }

    /**
     * <p> If true, the question data for the HIT will not be shown when a Worker whose
     * Qualifications do not meet this requirement tries to preview the HIT. That is, a
     * Worker's Qualifications must meet all of the requirements for which
     * RequiredToPreview is true in order to preview the HIT. If a Worker meets all of
     * the requirements where RequiredToPreview is true (or if there are no such
     * requirements), but does not meet all of the requirements for the HIT, the Worker
     * will be allowed to preview the HIT's question data, but will not be allowed to
     * accept and complete the HIT. The default is false. </p>
     */
    inline bool GetRequiredToPreview() const{ return m_requiredToPreview; }

    /**
     * <p> If true, the question data for the HIT will not be shown when a Worker whose
     * Qualifications do not meet this requirement tries to preview the HIT. That is, a
     * Worker's Qualifications must meet all of the requirements for which
     * RequiredToPreview is true in order to preview the HIT. If a Worker meets all of
     * the requirements where RequiredToPreview is true (or if there are no such
     * requirements), but does not meet all of the requirements for the HIT, the Worker
     * will be allowed to preview the HIT's question data, but will not be allowed to
     * accept and complete the HIT. The default is false. </p>
     */
    inline void SetRequiredToPreview(bool value) { m_requiredToPreviewHasBeenSet = true; m_requiredToPreview = value; }

    /**
     * <p> If true, the question data for the HIT will not be shown when a Worker whose
     * Qualifications do not meet this requirement tries to preview the HIT. That is, a
     * Worker's Qualifications must meet all of the requirements for which
     * RequiredToPreview is true in order to preview the HIT. If a Worker meets all of
     * the requirements where RequiredToPreview is true (or if there are no such
     * requirements), but does not meet all of the requirements for the HIT, the Worker
     * will be allowed to preview the HIT's question data, but will not be allowed to
     * accept and complete the HIT. The default is false. </p>
     */
    inline QualificationRequirement& WithRequiredToPreview(bool value) { SetRequiredToPreview(value); return *this;}

  private:
    Aws::String m_qualificationTypeId;
    bool m_qualificationTypeIdHasBeenSet;
    Comparator m_comparator;
    bool m_comparatorHasBeenSet;
    Aws::Vector<int> m_integerValues;
    bool m_integerValuesHasBeenSet;
    Aws::Vector<Locale> m_localeValues;
    bool m_localeValuesHasBeenSet;
    bool m_requiredToPreview;
    bool m_requiredToPreviewHasBeenSet;
  };

} // namespace Model
} // namespace MTurk
} // namespace Aws
