/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apptest/AppTest_EXPORTS.h>
#include <aws/apptest/model/Batch.h>
#include <aws/apptest/model/TN3270.h>
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
   * <p>Specifies the mainframe action type.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apptest-2022-12-06/MainframeActionType">AWS
   * API Reference</a></p>
   */
  class MainframeActionType
  {
  public:
    AWS_APPTEST_API MainframeActionType() = default;
    AWS_APPTEST_API MainframeActionType(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPTEST_API MainframeActionType& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPTEST_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The batch of the mainframe action type.</p>
     */
    inline const Batch& GetBatch() const { return m_batch; }
    inline bool BatchHasBeenSet() const { return m_batchHasBeenSet; }
    template<typename BatchT = Batch>
    void SetBatch(BatchT&& value) { m_batchHasBeenSet = true; m_batch = std::forward<BatchT>(value); }
    template<typename BatchT = Batch>
    MainframeActionType& WithBatch(BatchT&& value) { SetBatch(std::forward<BatchT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tn3270 port of the mainframe action type.</p>
     */
    inline const TN3270& GetTn3270() const { return m_tn3270; }
    inline bool Tn3270HasBeenSet() const { return m_tn3270HasBeenSet; }
    template<typename Tn3270T = TN3270>
    void SetTn3270(Tn3270T&& value) { m_tn3270HasBeenSet = true; m_tn3270 = std::forward<Tn3270T>(value); }
    template<typename Tn3270T = TN3270>
    MainframeActionType& WithTn3270(Tn3270T&& value) { SetTn3270(std::forward<Tn3270T>(value)); return *this;}
    ///@}
  private:

    Batch m_batch;
    bool m_batchHasBeenSet = false;

    TN3270 m_tn3270;
    bool m_tn3270HasBeenSet = false;
  };

} // namespace Model
} // namespace AppTest
} // namespace Aws
