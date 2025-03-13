/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/iotsitewise/model/KendraSourceDetail.h>
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
namespace IoTSiteWise
{
namespace Model
{

  /**
   * <p>The details of the dataset source associated with the dataset.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/SourceDetail">AWS
   * API Reference</a></p>
   */
  class SourceDetail
  {
  public:
    AWS_IOTSITEWISE_API SourceDetail() = default;
    AWS_IOTSITEWISE_API SourceDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API SourceDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Contains details about the Kendra dataset source.</p>
     */
    inline const KendraSourceDetail& GetKendra() const { return m_kendra; }
    inline bool KendraHasBeenSet() const { return m_kendraHasBeenSet; }
    template<typename KendraT = KendraSourceDetail>
    void SetKendra(KendraT&& value) { m_kendraHasBeenSet = true; m_kendra = std::forward<KendraT>(value); }
    template<typename KendraT = KendraSourceDetail>
    SourceDetail& WithKendra(KendraT&& value) { SetKendra(std::forward<KendraT>(value)); return *this;}
    ///@}
  private:

    KendraSourceDetail m_kendra;
    bool m_kendraHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
