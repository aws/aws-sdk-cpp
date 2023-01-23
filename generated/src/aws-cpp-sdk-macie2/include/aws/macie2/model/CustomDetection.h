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


    /**
     * <p>The Amazon Resource Name (ARN) of the custom data identifier.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the custom data identifier.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the custom data identifier.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the custom data identifier.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the custom data identifier.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the custom data identifier.</p>
     */
    inline CustomDetection& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the custom data identifier.</p>
     */
    inline CustomDetection& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the custom data identifier.</p>
     */
    inline CustomDetection& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The total number of occurrences of the sensitive data that the custom data
     * identifier detected.</p>
     */
    inline long long GetCount() const{ return m_count; }

    /**
     * <p>The total number of occurrences of the sensitive data that the custom data
     * identifier detected.</p>
     */
    inline bool CountHasBeenSet() const { return m_countHasBeenSet; }

    /**
     * <p>The total number of occurrences of the sensitive data that the custom data
     * identifier detected.</p>
     */
    inline void SetCount(long long value) { m_countHasBeenSet = true; m_count = value; }

    /**
     * <p>The total number of occurrences of the sensitive data that the custom data
     * identifier detected.</p>
     */
    inline CustomDetection& WithCount(long long value) { SetCount(value); return *this;}


    /**
     * <p>The name of the custom data identifier.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the custom data identifier.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the custom data identifier.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the custom data identifier.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the custom data identifier.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the custom data identifier.</p>
     */
    inline CustomDetection& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the custom data identifier.</p>
     */
    inline CustomDetection& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the custom data identifier.</p>
     */
    inline CustomDetection& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The location of 1-15 occurrences of the sensitive data that the custom data
     * identifier detected. A finding includes location data for a maximum of 15
     * occurrences of sensitive data.</p>
     */
    inline const Occurrences& GetOccurrences() const{ return m_occurrences; }

    /**
     * <p>The location of 1-15 occurrences of the sensitive data that the custom data
     * identifier detected. A finding includes location data for a maximum of 15
     * occurrences of sensitive data.</p>
     */
    inline bool OccurrencesHasBeenSet() const { return m_occurrencesHasBeenSet; }

    /**
     * <p>The location of 1-15 occurrences of the sensitive data that the custom data
     * identifier detected. A finding includes location data for a maximum of 15
     * occurrences of sensitive data.</p>
     */
    inline void SetOccurrences(const Occurrences& value) { m_occurrencesHasBeenSet = true; m_occurrences = value; }

    /**
     * <p>The location of 1-15 occurrences of the sensitive data that the custom data
     * identifier detected. A finding includes location data for a maximum of 15
     * occurrences of sensitive data.</p>
     */
    inline void SetOccurrences(Occurrences&& value) { m_occurrencesHasBeenSet = true; m_occurrences = std::move(value); }

    /**
     * <p>The location of 1-15 occurrences of the sensitive data that the custom data
     * identifier detected. A finding includes location data for a maximum of 15
     * occurrences of sensitive data.</p>
     */
    inline CustomDetection& WithOccurrences(const Occurrences& value) { SetOccurrences(value); return *this;}

    /**
     * <p>The location of 1-15 occurrences of the sensitive data that the custom data
     * identifier detected. A finding includes location data for a maximum of 15
     * occurrences of sensitive data.</p>
     */
    inline CustomDetection& WithOccurrences(Occurrences&& value) { SetOccurrences(std::move(value)); return *this;}

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
