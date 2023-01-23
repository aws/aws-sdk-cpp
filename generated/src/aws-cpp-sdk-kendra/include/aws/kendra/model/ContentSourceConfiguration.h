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
    AWS_KENDRA_API ContentSourceConfiguration();
    AWS_KENDRA_API ContentSourceConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API ContentSourceConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The identifier of the data sources you want to use for your Amazon Kendra
     * experience.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDataSourceIds() const{ return m_dataSourceIds; }

    /**
     * <p>The identifier of the data sources you want to use for your Amazon Kendra
     * experience.</p>
     */
    inline bool DataSourceIdsHasBeenSet() const { return m_dataSourceIdsHasBeenSet; }

    /**
     * <p>The identifier of the data sources you want to use for your Amazon Kendra
     * experience.</p>
     */
    inline void SetDataSourceIds(const Aws::Vector<Aws::String>& value) { m_dataSourceIdsHasBeenSet = true; m_dataSourceIds = value; }

    /**
     * <p>The identifier of the data sources you want to use for your Amazon Kendra
     * experience.</p>
     */
    inline void SetDataSourceIds(Aws::Vector<Aws::String>&& value) { m_dataSourceIdsHasBeenSet = true; m_dataSourceIds = std::move(value); }

    /**
     * <p>The identifier of the data sources you want to use for your Amazon Kendra
     * experience.</p>
     */
    inline ContentSourceConfiguration& WithDataSourceIds(const Aws::Vector<Aws::String>& value) { SetDataSourceIds(value); return *this;}

    /**
     * <p>The identifier of the data sources you want to use for your Amazon Kendra
     * experience.</p>
     */
    inline ContentSourceConfiguration& WithDataSourceIds(Aws::Vector<Aws::String>&& value) { SetDataSourceIds(std::move(value)); return *this;}

    /**
     * <p>The identifier of the data sources you want to use for your Amazon Kendra
     * experience.</p>
     */
    inline ContentSourceConfiguration& AddDataSourceIds(const Aws::String& value) { m_dataSourceIdsHasBeenSet = true; m_dataSourceIds.push_back(value); return *this; }

    /**
     * <p>The identifier of the data sources you want to use for your Amazon Kendra
     * experience.</p>
     */
    inline ContentSourceConfiguration& AddDataSourceIds(Aws::String&& value) { m_dataSourceIdsHasBeenSet = true; m_dataSourceIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The identifier of the data sources you want to use for your Amazon Kendra
     * experience.</p>
     */
    inline ContentSourceConfiguration& AddDataSourceIds(const char* value) { m_dataSourceIdsHasBeenSet = true; m_dataSourceIds.push_back(value); return *this; }


    /**
     * <p>The identifier of the FAQs that you want to use for your Amazon Kendra
     * experience.</p>
     */
    inline const Aws::Vector<Aws::String>& GetFaqIds() const{ return m_faqIds; }

    /**
     * <p>The identifier of the FAQs that you want to use for your Amazon Kendra
     * experience.</p>
     */
    inline bool FaqIdsHasBeenSet() const { return m_faqIdsHasBeenSet; }

    /**
     * <p>The identifier of the FAQs that you want to use for your Amazon Kendra
     * experience.</p>
     */
    inline void SetFaqIds(const Aws::Vector<Aws::String>& value) { m_faqIdsHasBeenSet = true; m_faqIds = value; }

    /**
     * <p>The identifier of the FAQs that you want to use for your Amazon Kendra
     * experience.</p>
     */
    inline void SetFaqIds(Aws::Vector<Aws::String>&& value) { m_faqIdsHasBeenSet = true; m_faqIds = std::move(value); }

    /**
     * <p>The identifier of the FAQs that you want to use for your Amazon Kendra
     * experience.</p>
     */
    inline ContentSourceConfiguration& WithFaqIds(const Aws::Vector<Aws::String>& value) { SetFaqIds(value); return *this;}

    /**
     * <p>The identifier of the FAQs that you want to use for your Amazon Kendra
     * experience.</p>
     */
    inline ContentSourceConfiguration& WithFaqIds(Aws::Vector<Aws::String>&& value) { SetFaqIds(std::move(value)); return *this;}

    /**
     * <p>The identifier of the FAQs that you want to use for your Amazon Kendra
     * experience.</p>
     */
    inline ContentSourceConfiguration& AddFaqIds(const Aws::String& value) { m_faqIdsHasBeenSet = true; m_faqIds.push_back(value); return *this; }

    /**
     * <p>The identifier of the FAQs that you want to use for your Amazon Kendra
     * experience.</p>
     */
    inline ContentSourceConfiguration& AddFaqIds(Aws::String&& value) { m_faqIdsHasBeenSet = true; m_faqIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The identifier of the FAQs that you want to use for your Amazon Kendra
     * experience.</p>
     */
    inline ContentSourceConfiguration& AddFaqIds(const char* value) { m_faqIdsHasBeenSet = true; m_faqIds.push_back(value); return *this; }


    /**
     * <p> <code>TRUE</code> to use documents you indexed directly using the
     * <code>BatchPutDocument</code> API.</p>
     */
    inline bool GetDirectPutContent() const{ return m_directPutContent; }

    /**
     * <p> <code>TRUE</code> to use documents you indexed directly using the
     * <code>BatchPutDocument</code> API.</p>
     */
    inline bool DirectPutContentHasBeenSet() const { return m_directPutContentHasBeenSet; }

    /**
     * <p> <code>TRUE</code> to use documents you indexed directly using the
     * <code>BatchPutDocument</code> API.</p>
     */
    inline void SetDirectPutContent(bool value) { m_directPutContentHasBeenSet = true; m_directPutContent = value; }

    /**
     * <p> <code>TRUE</code> to use documents you indexed directly using the
     * <code>BatchPutDocument</code> API.</p>
     */
    inline ContentSourceConfiguration& WithDirectPutContent(bool value) { SetDirectPutContent(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_dataSourceIds;
    bool m_dataSourceIdsHasBeenSet = false;

    Aws::Vector<Aws::String> m_faqIds;
    bool m_faqIdsHasBeenSet = false;

    bool m_directPutContent;
    bool m_directPutContentHasBeenSet = false;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
