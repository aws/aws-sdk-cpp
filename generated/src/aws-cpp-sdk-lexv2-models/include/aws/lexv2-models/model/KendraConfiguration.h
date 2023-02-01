/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
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
namespace LexModelsV2
{
namespace Model
{

  /**
   * <p>Provides configuration information for the AMAZON.KendraSearchIntent intent.
   * When you use this intent, Amazon Lex searches the specified Amazon Kendra index
   * and returns documents from the index that match the user's
   * utterance.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/KendraConfiguration">AWS
   * API Reference</a></p>
   */
  class KendraConfiguration
  {
  public:
    AWS_LEXMODELSV2_API KendraConfiguration();
    AWS_LEXMODELSV2_API KendraConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API KendraConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Kendra index that you want the
     * AMAZON.KendraSearchIntent intent to search. The index must be in the same
     * account and Region as the Amazon Lex bot.</p>
     */
    inline const Aws::String& GetKendraIndex() const{ return m_kendraIndex; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Kendra index that you want the
     * AMAZON.KendraSearchIntent intent to search. The index must be in the same
     * account and Region as the Amazon Lex bot.</p>
     */
    inline bool KendraIndexHasBeenSet() const { return m_kendraIndexHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Kendra index that you want the
     * AMAZON.KendraSearchIntent intent to search. The index must be in the same
     * account and Region as the Amazon Lex bot.</p>
     */
    inline void SetKendraIndex(const Aws::String& value) { m_kendraIndexHasBeenSet = true; m_kendraIndex = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Kendra index that you want the
     * AMAZON.KendraSearchIntent intent to search. The index must be in the same
     * account and Region as the Amazon Lex bot.</p>
     */
    inline void SetKendraIndex(Aws::String&& value) { m_kendraIndexHasBeenSet = true; m_kendraIndex = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Kendra index that you want the
     * AMAZON.KendraSearchIntent intent to search. The index must be in the same
     * account and Region as the Amazon Lex bot.</p>
     */
    inline void SetKendraIndex(const char* value) { m_kendraIndexHasBeenSet = true; m_kendraIndex.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Kendra index that you want the
     * AMAZON.KendraSearchIntent intent to search. The index must be in the same
     * account and Region as the Amazon Lex bot.</p>
     */
    inline KendraConfiguration& WithKendraIndex(const Aws::String& value) { SetKendraIndex(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Kendra index that you want the
     * AMAZON.KendraSearchIntent intent to search. The index must be in the same
     * account and Region as the Amazon Lex bot.</p>
     */
    inline KendraConfiguration& WithKendraIndex(Aws::String&& value) { SetKendraIndex(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Kendra index that you want the
     * AMAZON.KendraSearchIntent intent to search. The index must be in the same
     * account and Region as the Amazon Lex bot.</p>
     */
    inline KendraConfiguration& WithKendraIndex(const char* value) { SetKendraIndex(value); return *this;}


    /**
     * <p>Determines whether the AMAZON.KendraSearchIntent intent uses a custom query
     * string to query the Amazon Kendra index.</p>
     */
    inline bool GetQueryFilterStringEnabled() const{ return m_queryFilterStringEnabled; }

    /**
     * <p>Determines whether the AMAZON.KendraSearchIntent intent uses a custom query
     * string to query the Amazon Kendra index.</p>
     */
    inline bool QueryFilterStringEnabledHasBeenSet() const { return m_queryFilterStringEnabledHasBeenSet; }

    /**
     * <p>Determines whether the AMAZON.KendraSearchIntent intent uses a custom query
     * string to query the Amazon Kendra index.</p>
     */
    inline void SetQueryFilterStringEnabled(bool value) { m_queryFilterStringEnabledHasBeenSet = true; m_queryFilterStringEnabled = value; }

    /**
     * <p>Determines whether the AMAZON.KendraSearchIntent intent uses a custom query
     * string to query the Amazon Kendra index.</p>
     */
    inline KendraConfiguration& WithQueryFilterStringEnabled(bool value) { SetQueryFilterStringEnabled(value); return *this;}


    /**
     * <p>A query filter that Amazon Lex sends to Amazon Kendra to filter the response
     * from a query. The filter is in the format defined by Amazon Kendra. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/filtering.html">Filtering
     * queries</a>.</p>
     */
    inline const Aws::String& GetQueryFilterString() const{ return m_queryFilterString; }

    /**
     * <p>A query filter that Amazon Lex sends to Amazon Kendra to filter the response
     * from a query. The filter is in the format defined by Amazon Kendra. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/filtering.html">Filtering
     * queries</a>.</p>
     */
    inline bool QueryFilterStringHasBeenSet() const { return m_queryFilterStringHasBeenSet; }

    /**
     * <p>A query filter that Amazon Lex sends to Amazon Kendra to filter the response
     * from a query. The filter is in the format defined by Amazon Kendra. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/filtering.html">Filtering
     * queries</a>.</p>
     */
    inline void SetQueryFilterString(const Aws::String& value) { m_queryFilterStringHasBeenSet = true; m_queryFilterString = value; }

    /**
     * <p>A query filter that Amazon Lex sends to Amazon Kendra to filter the response
     * from a query. The filter is in the format defined by Amazon Kendra. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/filtering.html">Filtering
     * queries</a>.</p>
     */
    inline void SetQueryFilterString(Aws::String&& value) { m_queryFilterStringHasBeenSet = true; m_queryFilterString = std::move(value); }

    /**
     * <p>A query filter that Amazon Lex sends to Amazon Kendra to filter the response
     * from a query. The filter is in the format defined by Amazon Kendra. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/filtering.html">Filtering
     * queries</a>.</p>
     */
    inline void SetQueryFilterString(const char* value) { m_queryFilterStringHasBeenSet = true; m_queryFilterString.assign(value); }

    /**
     * <p>A query filter that Amazon Lex sends to Amazon Kendra to filter the response
     * from a query. The filter is in the format defined by Amazon Kendra. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/filtering.html">Filtering
     * queries</a>.</p>
     */
    inline KendraConfiguration& WithQueryFilterString(const Aws::String& value) { SetQueryFilterString(value); return *this;}

    /**
     * <p>A query filter that Amazon Lex sends to Amazon Kendra to filter the response
     * from a query. The filter is in the format defined by Amazon Kendra. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/filtering.html">Filtering
     * queries</a>.</p>
     */
    inline KendraConfiguration& WithQueryFilterString(Aws::String&& value) { SetQueryFilterString(std::move(value)); return *this;}

    /**
     * <p>A query filter that Amazon Lex sends to Amazon Kendra to filter the response
     * from a query. The filter is in the format defined by Amazon Kendra. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/filtering.html">Filtering
     * queries</a>.</p>
     */
    inline KendraConfiguration& WithQueryFilterString(const char* value) { SetQueryFilterString(value); return *this;}

  private:

    Aws::String m_kendraIndex;
    bool m_kendraIndexHasBeenSet = false;

    bool m_queryFilterStringEnabled;
    bool m_queryFilterStringEnabledHasBeenSet = false;

    Aws::String m_queryFilterString;
    bool m_queryFilterStringHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
