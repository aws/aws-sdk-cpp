﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lex-models/LexModelBuildingService_EXPORTS.h>
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
namespace LexModelBuildingService
{
namespace Model
{

  /**
   * <p>Provides configuration information for the AMAZON.KendraSearchIntent intent.
   * When you use this intent, Amazon Lex searches the specified Amazon Kendra index
   * and returns documents from the index that match the user's utterance. For more
   * information, see <a
   * href="http://docs.aws.amazon.com/lex/latest/dg/built-in-intent-kendra-search.html">
   * AMAZON.KendraSearchIntent</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lex-models-2017-04-19/KendraConfiguration">AWS
   * API Reference</a></p>
   */
  class KendraConfiguration
  {
  public:
    AWS_LEXMODELBUILDINGSERVICE_API KendraConfiguration() = default;
    AWS_LEXMODELBUILDINGSERVICE_API KendraConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELBUILDINGSERVICE_API KendraConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELBUILDINGSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Kendra index that you want the
     * AMAZON.KendraSearchIntent intent to search. The index must be in the same
     * account and Region as the Amazon Lex bot. If the Amazon Kendra index does not
     * exist, you get an exception when you call the <code>PutIntent</code>
     * operation.</p>
     */
    inline const Aws::String& GetKendraIndex() const { return m_kendraIndex; }
    inline bool KendraIndexHasBeenSet() const { return m_kendraIndexHasBeenSet; }
    template<typename KendraIndexT = Aws::String>
    void SetKendraIndex(KendraIndexT&& value) { m_kendraIndexHasBeenSet = true; m_kendraIndex = std::forward<KendraIndexT>(value); }
    template<typename KendraIndexT = Aws::String>
    KendraConfiguration& WithKendraIndex(KendraIndexT&& value) { SetKendraIndex(std::forward<KendraIndexT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A query filter that Amazon Lex sends to Amazon Kendra to filter the response
     * from the query. The filter is in the format defined by Amazon Kendra. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/kendra/latest/dg/filtering.html">Filtering
     * queries</a>.</p> <p>You can override this filter string with a new filter string
     * at runtime.</p>
     */
    inline const Aws::String& GetQueryFilterString() const { return m_queryFilterString; }
    inline bool QueryFilterStringHasBeenSet() const { return m_queryFilterStringHasBeenSet; }
    template<typename QueryFilterStringT = Aws::String>
    void SetQueryFilterString(QueryFilterStringT&& value) { m_queryFilterStringHasBeenSet = true; m_queryFilterString = std::forward<QueryFilterStringT>(value); }
    template<typename QueryFilterStringT = Aws::String>
    KendraConfiguration& WithQueryFilterString(QueryFilterStringT&& value) { SetQueryFilterString(std::forward<QueryFilterStringT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that has permission to search
     * the Amazon Kendra index. The role must be in the same account and Region as the
     * Amazon Lex bot. If the role does not exist, you get an exception when you call
     * the <code>PutIntent</code> operation.</p>
     */
    inline const Aws::String& GetRole() const { return m_role; }
    inline bool RoleHasBeenSet() const { return m_roleHasBeenSet; }
    template<typename RoleT = Aws::String>
    void SetRole(RoleT&& value) { m_roleHasBeenSet = true; m_role = std::forward<RoleT>(value); }
    template<typename RoleT = Aws::String>
    KendraConfiguration& WithRole(RoleT&& value) { SetRole(std::forward<RoleT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_kendraIndex;
    bool m_kendraIndexHasBeenSet = false;

    Aws::String m_queryFilterString;
    bool m_queryFilterStringHasBeenSet = false;

    Aws::String m_role;
    bool m_roleHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelBuildingService
} // namespace Aws
