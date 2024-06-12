/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apptest/AppTest_EXPORTS.h>
#include <aws/apptest/model/BatchSummary.h>
#include <aws/apptest/model/TN3270Summary.h>
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
namespace AppTest
{
namespace Model
{

  /**
   * <p>Specifies the mainframe action summary.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apptest-2022-12-06/MainframeActionSummary">AWS
   * API Reference</a></p>
   */
  class MainframeActionSummary
  {
  public:
    AWS_APPTEST_API MainframeActionSummary();
    AWS_APPTEST_API MainframeActionSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPTEST_API MainframeActionSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPTEST_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The batch of the mainframe action summary.</p>
     */
    inline const BatchSummary& GetBatch() const{ return m_batch; }
    inline bool BatchHasBeenSet() const { return m_batchHasBeenSet; }
    inline void SetBatch(const BatchSummary& value) { m_batchHasBeenSet = true; m_batch = value; }
    inline void SetBatch(BatchSummary&& value) { m_batchHasBeenSet = true; m_batch = std::move(value); }
    inline MainframeActionSummary& WithBatch(const BatchSummary& value) { SetBatch(value); return *this;}
    inline MainframeActionSummary& WithBatch(BatchSummary&& value) { SetBatch(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tn3270 port of the mainframe action summary.</p>
     */
    inline const TN3270Summary& GetTn3270() const{ return m_tn3270; }
    inline bool Tn3270HasBeenSet() const { return m_tn3270HasBeenSet; }
    inline void SetTn3270(const TN3270Summary& value) { m_tn3270HasBeenSet = true; m_tn3270 = value; }
    inline void SetTn3270(TN3270Summary&& value) { m_tn3270HasBeenSet = true; m_tn3270 = std::move(value); }
    inline MainframeActionSummary& WithTn3270(const TN3270Summary& value) { SetTn3270(value); return *this;}
    inline MainframeActionSummary& WithTn3270(TN3270Summary&& value) { SetTn3270(std::move(value)); return *this;}
    ///@}
  private:

    BatchSummary m_batch;
    bool m_batchHasBeenSet = false;

    TN3270Summary m_tn3270;
    bool m_tn3270HasBeenSet = false;
  };

} // namespace Model
} // namespace AppTest
} // namespace Aws
