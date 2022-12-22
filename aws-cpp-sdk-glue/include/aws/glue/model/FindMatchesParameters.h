/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
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
namespace Glue
{
namespace Model
{

  /**
   * <p>The parameters to configure the find matches transform.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/FindMatchesParameters">AWS
   * API Reference</a></p>
   */
  class FindMatchesParameters
  {
  public:
    AWS_GLUE_API FindMatchesParameters();
    AWS_GLUE_API FindMatchesParameters(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API FindMatchesParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of a column that uniquely identifies rows in the source table. Used
     * to help identify matching records.</p>
     */
    inline const Aws::String& GetPrimaryKeyColumnName() const{ return m_primaryKeyColumnName; }

    /**
     * <p>The name of a column that uniquely identifies rows in the source table. Used
     * to help identify matching records.</p>
     */
    inline bool PrimaryKeyColumnNameHasBeenSet() const { return m_primaryKeyColumnNameHasBeenSet; }

    /**
     * <p>The name of a column that uniquely identifies rows in the source table. Used
     * to help identify matching records.</p>
     */
    inline void SetPrimaryKeyColumnName(const Aws::String& value) { m_primaryKeyColumnNameHasBeenSet = true; m_primaryKeyColumnName = value; }

    /**
     * <p>The name of a column that uniquely identifies rows in the source table. Used
     * to help identify matching records.</p>
     */
    inline void SetPrimaryKeyColumnName(Aws::String&& value) { m_primaryKeyColumnNameHasBeenSet = true; m_primaryKeyColumnName = std::move(value); }

    /**
     * <p>The name of a column that uniquely identifies rows in the source table. Used
     * to help identify matching records.</p>
     */
    inline void SetPrimaryKeyColumnName(const char* value) { m_primaryKeyColumnNameHasBeenSet = true; m_primaryKeyColumnName.assign(value); }

    /**
     * <p>The name of a column that uniquely identifies rows in the source table. Used
     * to help identify matching records.</p>
     */
    inline FindMatchesParameters& WithPrimaryKeyColumnName(const Aws::String& value) { SetPrimaryKeyColumnName(value); return *this;}

    /**
     * <p>The name of a column that uniquely identifies rows in the source table. Used
     * to help identify matching records.</p>
     */
    inline FindMatchesParameters& WithPrimaryKeyColumnName(Aws::String&& value) { SetPrimaryKeyColumnName(std::move(value)); return *this;}

    /**
     * <p>The name of a column that uniquely identifies rows in the source table. Used
     * to help identify matching records.</p>
     */
    inline FindMatchesParameters& WithPrimaryKeyColumnName(const char* value) { SetPrimaryKeyColumnName(value); return *this;}


    /**
     * <p>The value selected when tuning your transform for a balance between precision
     * and recall. A value of 0.5 means no preference; a value of 1.0 means a bias
     * purely for precision, and a value of 0.0 means a bias for recall. Because this
     * is a tradeoff, choosing values close to 1.0 means very low recall, and choosing
     * values close to 0.0 results in very low precision.</p> <p>The precision metric
     * indicates how often your model is correct when it predicts a match. </p> <p>The
     * recall metric indicates that for an actual match, how often your model predicts
     * the match.</p>
     */
    inline double GetPrecisionRecallTradeoff() const{ return m_precisionRecallTradeoff; }

    /**
     * <p>The value selected when tuning your transform for a balance between precision
     * and recall. A value of 0.5 means no preference; a value of 1.0 means a bias
     * purely for precision, and a value of 0.0 means a bias for recall. Because this
     * is a tradeoff, choosing values close to 1.0 means very low recall, and choosing
     * values close to 0.0 results in very low precision.</p> <p>The precision metric
     * indicates how often your model is correct when it predicts a match. </p> <p>The
     * recall metric indicates that for an actual match, how often your model predicts
     * the match.</p>
     */
    inline bool PrecisionRecallTradeoffHasBeenSet() const { return m_precisionRecallTradeoffHasBeenSet; }

    /**
     * <p>The value selected when tuning your transform for a balance between precision
     * and recall. A value of 0.5 means no preference; a value of 1.0 means a bias
     * purely for precision, and a value of 0.0 means a bias for recall. Because this
     * is a tradeoff, choosing values close to 1.0 means very low recall, and choosing
     * values close to 0.0 results in very low precision.</p> <p>The precision metric
     * indicates how often your model is correct when it predicts a match. </p> <p>The
     * recall metric indicates that for an actual match, how often your model predicts
     * the match.</p>
     */
    inline void SetPrecisionRecallTradeoff(double value) { m_precisionRecallTradeoffHasBeenSet = true; m_precisionRecallTradeoff = value; }

    /**
     * <p>The value selected when tuning your transform for a balance between precision
     * and recall. A value of 0.5 means no preference; a value of 1.0 means a bias
     * purely for precision, and a value of 0.0 means a bias for recall. Because this
     * is a tradeoff, choosing values close to 1.0 means very low recall, and choosing
     * values close to 0.0 results in very low precision.</p> <p>The precision metric
     * indicates how often your model is correct when it predicts a match. </p> <p>The
     * recall metric indicates that for an actual match, how often your model predicts
     * the match.</p>
     */
    inline FindMatchesParameters& WithPrecisionRecallTradeoff(double value) { SetPrecisionRecallTradeoff(value); return *this;}


    /**
     * <p>The value that is selected when tuning your transform for a balance between
     * accuracy and cost. A value of 0.5 means that the system balances accuracy and
     * cost concerns. A value of 1.0 means a bias purely for accuracy, which typically
     * results in a higher cost, sometimes substantially higher. A value of 0.0 means a
     * bias purely for cost, which results in a less accurate <code>FindMatches</code>
     * transform, sometimes with unacceptable accuracy.</p> <p>Accuracy measures how
     * well the transform finds true positives and true negatives. Increasing accuracy
     * requires more machine resources and cost. But it also results in increased
     * recall. </p> <p>Cost measures how many compute resources, and thus money, are
     * consumed to run the transform.</p>
     */
    inline double GetAccuracyCostTradeoff() const{ return m_accuracyCostTradeoff; }

    /**
     * <p>The value that is selected when tuning your transform for a balance between
     * accuracy and cost. A value of 0.5 means that the system balances accuracy and
     * cost concerns. A value of 1.0 means a bias purely for accuracy, which typically
     * results in a higher cost, sometimes substantially higher. A value of 0.0 means a
     * bias purely for cost, which results in a less accurate <code>FindMatches</code>
     * transform, sometimes with unacceptable accuracy.</p> <p>Accuracy measures how
     * well the transform finds true positives and true negatives. Increasing accuracy
     * requires more machine resources and cost. But it also results in increased
     * recall. </p> <p>Cost measures how many compute resources, and thus money, are
     * consumed to run the transform.</p>
     */
    inline bool AccuracyCostTradeoffHasBeenSet() const { return m_accuracyCostTradeoffHasBeenSet; }

    /**
     * <p>The value that is selected when tuning your transform for a balance between
     * accuracy and cost. A value of 0.5 means that the system balances accuracy and
     * cost concerns. A value of 1.0 means a bias purely for accuracy, which typically
     * results in a higher cost, sometimes substantially higher. A value of 0.0 means a
     * bias purely for cost, which results in a less accurate <code>FindMatches</code>
     * transform, sometimes with unacceptable accuracy.</p> <p>Accuracy measures how
     * well the transform finds true positives and true negatives. Increasing accuracy
     * requires more machine resources and cost. But it also results in increased
     * recall. </p> <p>Cost measures how many compute resources, and thus money, are
     * consumed to run the transform.</p>
     */
    inline void SetAccuracyCostTradeoff(double value) { m_accuracyCostTradeoffHasBeenSet = true; m_accuracyCostTradeoff = value; }

    /**
     * <p>The value that is selected when tuning your transform for a balance between
     * accuracy and cost. A value of 0.5 means that the system balances accuracy and
     * cost concerns. A value of 1.0 means a bias purely for accuracy, which typically
     * results in a higher cost, sometimes substantially higher. A value of 0.0 means a
     * bias purely for cost, which results in a less accurate <code>FindMatches</code>
     * transform, sometimes with unacceptable accuracy.</p> <p>Accuracy measures how
     * well the transform finds true positives and true negatives. Increasing accuracy
     * requires more machine resources and cost. But it also results in increased
     * recall. </p> <p>Cost measures how many compute resources, and thus money, are
     * consumed to run the transform.</p>
     */
    inline FindMatchesParameters& WithAccuracyCostTradeoff(double value) { SetAccuracyCostTradeoff(value); return *this;}


    /**
     * <p>The value to switch on or off to force the output to match the provided
     * labels from users. If the value is <code>True</code>, the <code>find
     * matches</code> transform forces the output to match the provided labels. The
     * results override the normal conflation results. If the value is
     * <code>False</code>, the <code>find matches</code> transform does not ensure all
     * the labels provided are respected, and the results rely on the trained
     * model.</p> <p>Note that setting this value to true may increase the conflation
     * execution time.</p>
     */
    inline bool GetEnforceProvidedLabels() const{ return m_enforceProvidedLabels; }

    /**
     * <p>The value to switch on or off to force the output to match the provided
     * labels from users. If the value is <code>True</code>, the <code>find
     * matches</code> transform forces the output to match the provided labels. The
     * results override the normal conflation results. If the value is
     * <code>False</code>, the <code>find matches</code> transform does not ensure all
     * the labels provided are respected, and the results rely on the trained
     * model.</p> <p>Note that setting this value to true may increase the conflation
     * execution time.</p>
     */
    inline bool EnforceProvidedLabelsHasBeenSet() const { return m_enforceProvidedLabelsHasBeenSet; }

    /**
     * <p>The value to switch on or off to force the output to match the provided
     * labels from users. If the value is <code>True</code>, the <code>find
     * matches</code> transform forces the output to match the provided labels. The
     * results override the normal conflation results. If the value is
     * <code>False</code>, the <code>find matches</code> transform does not ensure all
     * the labels provided are respected, and the results rely on the trained
     * model.</p> <p>Note that setting this value to true may increase the conflation
     * execution time.</p>
     */
    inline void SetEnforceProvidedLabels(bool value) { m_enforceProvidedLabelsHasBeenSet = true; m_enforceProvidedLabels = value; }

    /**
     * <p>The value to switch on or off to force the output to match the provided
     * labels from users. If the value is <code>True</code>, the <code>find
     * matches</code> transform forces the output to match the provided labels. The
     * results override the normal conflation results. If the value is
     * <code>False</code>, the <code>find matches</code> transform does not ensure all
     * the labels provided are respected, and the results rely on the trained
     * model.</p> <p>Note that setting this value to true may increase the conflation
     * execution time.</p>
     */
    inline FindMatchesParameters& WithEnforceProvidedLabels(bool value) { SetEnforceProvidedLabels(value); return *this;}

  private:

    Aws::String m_primaryKeyColumnName;
    bool m_primaryKeyColumnNameHasBeenSet = false;

    double m_precisionRecallTradeoff;
    bool m_precisionRecallTradeoffHasBeenSet = false;

    double m_accuracyCostTradeoff;
    bool m_accuracyCostTradeoffHasBeenSet = false;

    bool m_enforceProvidedLabels;
    bool m_enforceProvidedLabelsHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
