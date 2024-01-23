/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>

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
namespace Inspector2
{
namespace Model
{

  /**
   * <p>The stop CIS message progress.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/StopCisMessageProgress">AWS
   * API Reference</a></p>
   */
  class StopCisMessageProgress
  {
  public:
    AWS_INSPECTOR2_API StopCisMessageProgress();
    AWS_INSPECTOR2_API StopCisMessageProgress(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API StopCisMessageProgress& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The progress' error checks.</p>
     */
    inline int GetErrorChecks() const{ return m_errorChecks; }

    /**
     * <p>The progress' error checks.</p>
     */
    inline bool ErrorChecksHasBeenSet() const { return m_errorChecksHasBeenSet; }

    /**
     * <p>The progress' error checks.</p>
     */
    inline void SetErrorChecks(int value) { m_errorChecksHasBeenSet = true; m_errorChecks = value; }

    /**
     * <p>The progress' error checks.</p>
     */
    inline StopCisMessageProgress& WithErrorChecks(int value) { SetErrorChecks(value); return *this;}


    /**
     * <p>The progress' failed checks.</p>
     */
    inline int GetFailedChecks() const{ return m_failedChecks; }

    /**
     * <p>The progress' failed checks.</p>
     */
    inline bool FailedChecksHasBeenSet() const { return m_failedChecksHasBeenSet; }

    /**
     * <p>The progress' failed checks.</p>
     */
    inline void SetFailedChecks(int value) { m_failedChecksHasBeenSet = true; m_failedChecks = value; }

    /**
     * <p>The progress' failed checks.</p>
     */
    inline StopCisMessageProgress& WithFailedChecks(int value) { SetFailedChecks(value); return *this;}


    /**
     * <p>The progress' informational checks.</p>
     */
    inline int GetInformationalChecks() const{ return m_informationalChecks; }

    /**
     * <p>The progress' informational checks.</p>
     */
    inline bool InformationalChecksHasBeenSet() const { return m_informationalChecksHasBeenSet; }

    /**
     * <p>The progress' informational checks.</p>
     */
    inline void SetInformationalChecks(int value) { m_informationalChecksHasBeenSet = true; m_informationalChecks = value; }

    /**
     * <p>The progress' informational checks.</p>
     */
    inline StopCisMessageProgress& WithInformationalChecks(int value) { SetInformationalChecks(value); return *this;}


    /**
     * <p>The progress' not applicable checks.</p>
     */
    inline int GetNotApplicableChecks() const{ return m_notApplicableChecks; }

    /**
     * <p>The progress' not applicable checks.</p>
     */
    inline bool NotApplicableChecksHasBeenSet() const { return m_notApplicableChecksHasBeenSet; }

    /**
     * <p>The progress' not applicable checks.</p>
     */
    inline void SetNotApplicableChecks(int value) { m_notApplicableChecksHasBeenSet = true; m_notApplicableChecks = value; }

    /**
     * <p>The progress' not applicable checks.</p>
     */
    inline StopCisMessageProgress& WithNotApplicableChecks(int value) { SetNotApplicableChecks(value); return *this;}


    /**
     * <p>The progress' not evaluated checks.</p>
     */
    inline int GetNotEvaluatedChecks() const{ return m_notEvaluatedChecks; }

    /**
     * <p>The progress' not evaluated checks.</p>
     */
    inline bool NotEvaluatedChecksHasBeenSet() const { return m_notEvaluatedChecksHasBeenSet; }

    /**
     * <p>The progress' not evaluated checks.</p>
     */
    inline void SetNotEvaluatedChecks(int value) { m_notEvaluatedChecksHasBeenSet = true; m_notEvaluatedChecks = value; }

    /**
     * <p>The progress' not evaluated checks.</p>
     */
    inline StopCisMessageProgress& WithNotEvaluatedChecks(int value) { SetNotEvaluatedChecks(value); return *this;}


    /**
     * <p>The progress' successful checks.</p>
     */
    inline int GetSuccessfulChecks() const{ return m_successfulChecks; }

    /**
     * <p>The progress' successful checks.</p>
     */
    inline bool SuccessfulChecksHasBeenSet() const { return m_successfulChecksHasBeenSet; }

    /**
     * <p>The progress' successful checks.</p>
     */
    inline void SetSuccessfulChecks(int value) { m_successfulChecksHasBeenSet = true; m_successfulChecks = value; }

    /**
     * <p>The progress' successful checks.</p>
     */
    inline StopCisMessageProgress& WithSuccessfulChecks(int value) { SetSuccessfulChecks(value); return *this;}


    /**
     * <p>The progress' total checks.</p>
     */
    inline int GetTotalChecks() const{ return m_totalChecks; }

    /**
     * <p>The progress' total checks.</p>
     */
    inline bool TotalChecksHasBeenSet() const { return m_totalChecksHasBeenSet; }

    /**
     * <p>The progress' total checks.</p>
     */
    inline void SetTotalChecks(int value) { m_totalChecksHasBeenSet = true; m_totalChecks = value; }

    /**
     * <p>The progress' total checks.</p>
     */
    inline StopCisMessageProgress& WithTotalChecks(int value) { SetTotalChecks(value); return *this;}


    /**
     * <p>The progress' unknown checks.</p>
     */
    inline int GetUnknownChecks() const{ return m_unknownChecks; }

    /**
     * <p>The progress' unknown checks.</p>
     */
    inline bool UnknownChecksHasBeenSet() const { return m_unknownChecksHasBeenSet; }

    /**
     * <p>The progress' unknown checks.</p>
     */
    inline void SetUnknownChecks(int value) { m_unknownChecksHasBeenSet = true; m_unknownChecks = value; }

    /**
     * <p>The progress' unknown checks.</p>
     */
    inline StopCisMessageProgress& WithUnknownChecks(int value) { SetUnknownChecks(value); return *this;}

  private:

    int m_errorChecks;
    bool m_errorChecksHasBeenSet = false;

    int m_failedChecks;
    bool m_failedChecksHasBeenSet = false;

    int m_informationalChecks;
    bool m_informationalChecksHasBeenSet = false;

    int m_notApplicableChecks;
    bool m_notApplicableChecksHasBeenSet = false;

    int m_notEvaluatedChecks;
    bool m_notEvaluatedChecksHasBeenSet = false;

    int m_successfulChecks;
    bool m_successfulChecksHasBeenSet = false;

    int m_totalChecks;
    bool m_totalChecksHasBeenSet = false;

    int m_unknownChecks;
    bool m_unknownChecksHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
