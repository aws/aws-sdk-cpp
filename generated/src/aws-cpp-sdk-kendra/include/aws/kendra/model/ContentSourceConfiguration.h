/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra/Kendra_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace kendra
{
namespace Model
{

  /**
   * <p>Provides the configuration information for your content sources, such as data
   * sources, FAQs, and content indexed directly via <a
   * href="https://docs.aws.amazon.com/kendra/latest/dg/API_BatchPutDocument.html">BatchPutDocument</a>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/ContentSourceConfiguration">AWS
   * API Reference</a></p>
   */
  class ContentSourceConfiguration
  {
  public:
    AWS_KENDRA_API ContentSourceConfiguration() = default;
    AWS_KENDRA_API ContentSourceConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API ContentSourceConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier of the data sources you want to use for your Amazon Kendra
     * experience.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDataSourceIds() const { return m_dataSourceIds; }
    inline bool DataSourceIdsHasBeenSet() const { return m_dataSourceIdsHasBeenSet; }
    template<typename DataSourceIdsT = Aws::Vector<Aws::String>>
    void SetDataSourceIds(DataSourceIdsT&& value) { m_dataSourceIdsHasBeenSet = true; m_dataSourceIds = std::forward<DataSourceIdsT>(value); }
    template<typename DataSourceIdsT = Aws::Vector<Aws::String>>
    ContentSourceConfiguration& WithDataSourceIds(DataSourceIdsT&& value) { SetDataSourceIds(std::forward<DataSourceIdsT>(value)); return *this;}
    template<typename DataSourceIdsT = Aws::String>
    ContentSourceConfiguration& AddDataSourceIds(DataSourceIdsT&& value) { m_dataSourceIdsHasBeenSet = true; m_dataSourceIds.emplace_back(std::forward<DataSourceIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The identifier of the FAQs that you want to use for your Amazon Kendra
     * experience.</p>
     */
    inline const Aws::Vector<Aws::String>& GetFaqIds() const { return m_faqIds; }
    inline bool FaqIdsHasBeenSet() const { return m_faqIdsHasBeenSet; }
    template<typename FaqIdsT = Aws::Vector<Aws::String>>
    void SetFaqIds(FaqIdsT&& value) { m_faqIdsHasBeenSet = true; m_faqIds = std::forward<FaqIdsT>(value); }
    template<typename FaqIdsT = Aws::Vector<Aws::String>>
    ContentSourceConfiguration& WithFaqIds(FaqIdsT&& value) { SetFaqIds(std::forward<FaqIdsT>(value)); return *this;}
    template<typename FaqIdsT = Aws::String>
    ContentSourceConfiguration& AddFaqIds(FaqIdsT&& value) { m_faqIdsHasBeenSet = true; m_faqIds.emplace_back(std::forward<FaqIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> <code>TRUE</code> to use documents you indexed directly using the
     * <code>BatchPutDocument</code> API.</p>
     */
    inline bool GetDirectPutContent() const { return m_directPutContent; }
    inline bool DirectPutContentHasBeenSet() const { return m_directPutContentHasBeenSet; }
    inline void SetDirectPutContent(bool value) { m_directPutContentHasBeenSet = true; m_directPutContent = value; }
    inline ContentSourceConfiguration& WithDirectPutContent(bool value) { SetDirectPutContent(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_dataSourceIds;
    bool m_dataSourceIdsHasBeenSet = false;

    Aws::Vector<Aws::String> m_faqIds;
    bool m_faqIdsHasBeenSet = false;

    bool m_directPutContent{false};
    bool m_directPutContentHasBeenSet = false;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
