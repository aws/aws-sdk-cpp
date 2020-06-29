/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie2/Macie2_EXPORTS.h>
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
   * <p>Provides information about a custom data identifier that produced a sensitive
   * data finding, and the number of occurrences of the data that it detected for the
   * finding.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/CustomDetection">AWS
   * API Reference</a></p>
   */
  class AWS_MACIE2_API CustomDetection
  {
  public:
    CustomDetection();
    CustomDetection(Aws::Utils::Json::JsonView jsonValue);
    CustomDetection& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


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
     * <p>The total number of occurrences of the data that the custom data identifier
     * detected for the finding.</p>
     */
    inline long long GetCount() const{ return m_count; }

    /**
     * <p>The total number of occurrences of the data that the custom data identifier
     * detected for the finding.</p>
     */
    inline bool CountHasBeenSet() const { return m_countHasBeenSet; }

    /**
     * <p>The total number of occurrences of the data that the custom data identifier
     * detected for the finding.</p>
     */
    inline void SetCount(long long value) { m_countHasBeenSet = true; m_count = value; }

    /**
     * <p>The total number of occurrences of the data that the custom data identifier
     * detected for the finding.</p>
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

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet;

    long long m_count;
    bool m_countHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
