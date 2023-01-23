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
   * <p>Contains information about whether the result of a previous query was
   * reused.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/athena-2017-05-18/ResultReuseInformation">AWS
   * API Reference</a></p>
   */
  class ResultReuseInformation
  {
  public:
    AWS_ATHENA_API ResultReuseInformation();
    AWS_ATHENA_API ResultReuseInformation(Aws::Utils::Json::JsonView jsonValue);
    AWS_ATHENA_API ResultReuseInformation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ATHENA_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>True if a previous query result was reused; false if the result was generated
     * from a new run of the query.</p>
     */
    inline bool GetReusedPreviousResult() const{ return m_reusedPreviousResult; }

    /**
     * <p>True if a previous query result was reused; false if the result was generated
     * from a new run of the query.</p>
     */
    inline bool ReusedPreviousResultHasBeenSet() const { return m_reusedPreviousResultHasBeenSet; }

    /**
     * <p>True if a previous query result was reused; false if the result was generated
     * from a new run of the query.</p>
     */
    inline void SetReusedPreviousResult(bool value) { m_reusedPreviousResultHasBeenSet = true; m_reusedPreviousResult = value; }

    /**
     * <p>True if a previous query result was reused; false if the result was generated
     * from a new run of the query.</p>
     */
    inline ResultReuseInformation& WithReusedPreviousResult(bool value) { SetReusedPreviousResult(value); return *this;}

  private:

    bool m_reusedPreviousResult;
    bool m_reusedPreviousResultHasBeenSet = false;
  };

} // namespace Model
} // namespace Athena
} // namespace Aws
