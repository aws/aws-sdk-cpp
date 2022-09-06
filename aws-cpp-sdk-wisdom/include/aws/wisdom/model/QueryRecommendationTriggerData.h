/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wisdom/ConnectWisdomService_EXPORTS.h>
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
namespace ConnectWisdomService
{
namespace Model
{

  /**
   * <p>Data associated with the QUERY RecommendationTriggerType.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wisdom-2020-10-19/QueryRecommendationTriggerData">AWS
   * API Reference</a></p>
   */
  class AWS_CONNECTWISDOMSERVICE_API QueryRecommendationTriggerData
  {
  public:
    QueryRecommendationTriggerData();
    QueryRecommendationTriggerData(Aws::Utils::Json::JsonView jsonValue);
    QueryRecommendationTriggerData& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The text associated with the recommendation trigger.</p>
     */
    inline const Aws::String& GetText() const{ return m_text; }

    /**
     * <p>The text associated with the recommendation trigger.</p>
     */
    inline bool TextHasBeenSet() const { return m_textHasBeenSet; }

    /**
     * <p>The text associated with the recommendation trigger.</p>
     */
    inline void SetText(const Aws::String& value) { m_textHasBeenSet = true; m_text = value; }

    /**
     * <p>The text associated with the recommendation trigger.</p>
     */
    inline void SetText(Aws::String&& value) { m_textHasBeenSet = true; m_text = std::move(value); }

    /**
     * <p>The text associated with the recommendation trigger.</p>
     */
    inline void SetText(const char* value) { m_textHasBeenSet = true; m_text.assign(value); }

    /**
     * <p>The text associated with the recommendation trigger.</p>
     */
    inline QueryRecommendationTriggerData& WithText(const Aws::String& value) { SetText(value); return *this;}

    /**
     * <p>The text associated with the recommendation trigger.</p>
     */
    inline QueryRecommendationTriggerData& WithText(Aws::String&& value) { SetText(std::move(value)); return *this;}

    /**
     * <p>The text associated with the recommendation trigger.</p>
     */
    inline QueryRecommendationTriggerData& WithText(const char* value) { SetText(value); return *this;}

  private:

    Aws::String m_text;
    bool m_textHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectWisdomService
} // namespace Aws
