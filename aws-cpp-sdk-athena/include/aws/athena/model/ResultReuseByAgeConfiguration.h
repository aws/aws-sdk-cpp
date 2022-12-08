/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/athena/Athena_EXPORTS.h>

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
namespace Athena
{
namespace Model
{

  /**
   * <p>Specifies whether previous query results are reused, and if so, their maximum
   * age.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/athena-2017-05-18/ResultReuseByAgeConfiguration">AWS
   * API Reference</a></p>
   */
  class ResultReuseByAgeConfiguration
  {
  public:
    AWS_ATHENA_API ResultReuseByAgeConfiguration();
    AWS_ATHENA_API ResultReuseByAgeConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_ATHENA_API ResultReuseByAgeConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ATHENA_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>True if previous query results can be reused when the query is run;
     * otherwise, false. The default is false.</p>
     */
    inline bool GetEnabled() const{ return m_enabled; }

    /**
     * <p>True if previous query results can be reused when the query is run;
     * otherwise, false. The default is false.</p>
     */
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }

    /**
     * <p>True if previous query results can be reused when the query is run;
     * otherwise, false. The default is false.</p>
     */
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }

    /**
     * <p>True if previous query results can be reused when the query is run;
     * otherwise, false. The default is false.</p>
     */
    inline ResultReuseByAgeConfiguration& WithEnabled(bool value) { SetEnabled(value); return *this;}


    /**
     * <p>Specifies, in minutes, the maximum age of a previous query result that Athena
     * should consider for reuse. The default is 60.</p>
     */
    inline int GetMaxAgeInMinutes() const{ return m_maxAgeInMinutes; }

    /**
     * <p>Specifies, in minutes, the maximum age of a previous query result that Athena
     * should consider for reuse. The default is 60.</p>
     */
    inline bool MaxAgeInMinutesHasBeenSet() const { return m_maxAgeInMinutesHasBeenSet; }

    /**
     * <p>Specifies, in minutes, the maximum age of a previous query result that Athena
     * should consider for reuse. The default is 60.</p>
     */
    inline void SetMaxAgeInMinutes(int value) { m_maxAgeInMinutesHasBeenSet = true; m_maxAgeInMinutes = value; }

    /**
     * <p>Specifies, in minutes, the maximum age of a previous query result that Athena
     * should consider for reuse. The default is 60.</p>
     */
    inline ResultReuseByAgeConfiguration& WithMaxAgeInMinutes(int value) { SetMaxAgeInMinutes(value); return *this;}

  private:

    bool m_enabled;
    bool m_enabledHasBeenSet = false;

    int m_maxAgeInMinutes;
    bool m_maxAgeInMinutesHasBeenSet = false;
  };

} // namespace Model
} // namespace Athena
} // namespace Aws
