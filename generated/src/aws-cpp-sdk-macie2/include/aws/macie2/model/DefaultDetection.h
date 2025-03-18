/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie2/Macie2_EXPORTS.h>
#include <aws/macie2/model/Occurrences.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace Macie2
{
namespace Model
{

  /**
   * <p>Provides information about a type of sensitive data that was detected by a
   * managed data identifier and produced a sensitive data finding.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/DefaultDetection">AWS
   * API Reference</a></p>
   */
  class DefaultDetection
  {
  public:
    AWS_MACIE2_API DefaultDetection() = default;
    AWS_MACIE2_API DefaultDetection(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API DefaultDetection& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The total number of occurrences of the type of sensitive data that was
     * detected.</p>
     */
    inline long long GetCount() const { return m_count; }
    inline bool CountHasBeenSet() const { return m_countHasBeenSet; }
    inline void SetCount(long long value) { m_countHasBeenSet = true; m_count = value; }
    inline DefaultDetection& WithCount(long long value) { SetCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The location of 1-15 occurrences of the sensitive data that was detected. A
     * finding includes location data for a maximum of 15 occurrences of sensitive
     * data.</p>
     */
    inline const Occurrences& GetOccurrences() const { return m_occurrences; }
    inline bool OccurrencesHasBeenSet() const { return m_occurrencesHasBeenSet; }
    template<typename OccurrencesT = Occurrences>
    void SetOccurrences(OccurrencesT&& value) { m_occurrencesHasBeenSet = true; m_occurrences = std::forward<OccurrencesT>(value); }
    template<typename OccurrencesT = Occurrences>
    DefaultDetection& WithOccurrences(OccurrencesT&& value) { SetOccurrences(std::forward<OccurrencesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of sensitive data that was detected. For example, AWS_CREDENTIALS,
     * PHONE_NUMBER, or ADDRESS.</p>
     */
    inline const Aws::String& GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    template<typename TypeT = Aws::String>
    void SetType(TypeT&& value) { m_typeHasBeenSet = true; m_type = std::forward<TypeT>(value); }
    template<typename TypeT = Aws::String>
    DefaultDetection& WithType(TypeT&& value) { SetType(std::forward<TypeT>(value)); return *this;}
    ///@}
  private:

    long long m_count{0};
    bool m_countHasBeenSet = false;

    Occurrences m_occurrences;
    bool m_occurrencesHasBeenSet = false;

    Aws::String m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
