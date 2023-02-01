/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra/Kendra_EXPORTS.h>
#include <aws/kendra/KendraRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace kendra
{
namespace Model
{

  /**
   */
  class ClearQuerySuggestionsRequest : public KendraRequest
  {
  public:
    AWS_KENDRA_API ClearQuerySuggestionsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ClearQuerySuggestions"; }

    AWS_KENDRA_API Aws::String SerializePayload() const override;

    AWS_KENDRA_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The identifier of the index you want to clear query suggestions from.</p>
     */
    inline const Aws::String& GetIndexId() const{ return m_indexId; }

    /**
     * <p>The identifier of the index you want to clear query suggestions from.</p>
     */
    inline bool IndexIdHasBeenSet() const { return m_indexIdHasBeenSet; }

    /**
     * <p>The identifier of the index you want to clear query suggestions from.</p>
     */
    inline void SetIndexId(const Aws::String& value) { m_indexIdHasBeenSet = true; m_indexId = value; }

    /**
     * <p>The identifier of the index you want to clear query suggestions from.</p>
     */
    inline void SetIndexId(Aws::String&& value) { m_indexIdHasBeenSet = true; m_indexId = std::move(value); }

    /**
     * <p>The identifier of the index you want to clear query suggestions from.</p>
     */
    inline void SetIndexId(const char* value) { m_indexIdHasBeenSet = true; m_indexId.assign(value); }

    /**
     * <p>The identifier of the index you want to clear query suggestions from.</p>
     */
    inline ClearQuerySuggestionsRequest& WithIndexId(const Aws::String& value) { SetIndexId(value); return *this;}

    /**
     * <p>The identifier of the index you want to clear query suggestions from.</p>
     */
    inline ClearQuerySuggestionsRequest& WithIndexId(Aws::String&& value) { SetIndexId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the index you want to clear query suggestions from.</p>
     */
    inline ClearQuerySuggestionsRequest& WithIndexId(const char* value) { SetIndexId(value); return *this;}

  private:

    Aws::String m_indexId;
    bool m_indexIdHasBeenSet = false;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
