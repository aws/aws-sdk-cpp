/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie2/Macie2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/macie2/model/Occurrences.h>
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
   * <p>Provides information about a custom data identifier that produced a sensitive
   * data finding, and the sensitive data that it detected for the
   * finding.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/CustomDetection">AWS
   * API Reference</a></p>
   */
  class CustomDetection
  {
  public:
    AWS_MACIE2_API CustomDetection();
    AWS_MACIE2_API CustomDetection(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API CustomDetection& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier for the custom data identifier.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline CustomDetection& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline CustomDetection& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline CustomDetection& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total number of occurrences of the sensitive data that the custom data
     * identifier detected.</p>
     */
    inline long long GetCount() const{ return m_count; }
    inline bool CountHasBeenSet() const { return m_countHasBeenSet; }
    inline void SetCount(long long value) { m_countHasBeenSet = true; m_count = value; }
    inline CustomDetection& WithCount(long long value) { SetCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the custom data identifier.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline CustomDetection& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline CustomDetection& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline CustomDetection& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The location of 1-15 occurrences of the sensitive data that the custom data
     * identifier detected. A finding includes location data for a maximum of 15
     * occurrences of sensitive data.</p>
     */
    inline const Occurrences& GetOccurrences() const{ return m_occurrences; }
    inline bool OccurrencesHasBeenSet() const { return m_occurrencesHasBeenSet; }
    inline void SetOccurrences(const Occurrences& value) { m_occurrencesHasBeenSet = true; m_occurrences = value; }
    inline void SetOccurrences(Occurrences&& value) { m_occurrencesHasBeenSet = true; m_occurrences = std::move(value); }
    inline CustomDetection& WithOccurrences(const Occurrences& value) { SetOccurrences(value); return *this;}
    inline CustomDetection& WithOccurrences(Occurrences&& value) { SetOccurrences(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    long long m_count;
    bool m_countHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Occurrences m_occurrences;
    bool m_occurrencesHasBeenSet = false;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
