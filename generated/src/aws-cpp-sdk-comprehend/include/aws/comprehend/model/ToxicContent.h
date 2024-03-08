/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/comprehend/Comprehend_EXPORTS.h>
#include <aws/comprehend/model/ToxicContentType.h>
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
namespace Comprehend
{
namespace Model
{

  /**
   * <p>Toxic content analysis result for one string. For more information about
   * toxicity detection, see <a
   * href="https://docs.aws.amazon.com/comprehend/latest/dg/toxicity-detection.html">Toxicity
   * detection</a> in the <i>Amazon Comprehend Developer Guide</i> </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/ToxicContent">AWS
   * API Reference</a></p>
   */
  class ToxicContent
  {
  public:
    AWS_COMPREHEND_API ToxicContent();
    AWS_COMPREHEND_API ToxicContent(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHEND_API ToxicContent& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHEND_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the toxic content type.</p>
     */
    inline const ToxicContentType& GetName() const{ return m_name; }

    /**
     * <p>The name of the toxic content type.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the toxic content type.</p>
     */
    inline void SetName(const ToxicContentType& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the toxic content type.</p>
     */
    inline void SetName(ToxicContentType&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the toxic content type.</p>
     */
    inline ToxicContent& WithName(const ToxicContentType& value) { SetName(value); return *this;}

    /**
     * <p>The name of the toxic content type.</p>
     */
    inline ToxicContent& WithName(ToxicContentType&& value) { SetName(std::move(value)); return *this;}


    /**
     * <p> Model confidence in the detected content type. Value range is zero to one,
     * where one is highest confidence.</p>
     */
    inline double GetScore() const{ return m_score; }

    /**
     * <p> Model confidence in the detected content type. Value range is zero to one,
     * where one is highest confidence.</p>
     */
    inline bool ScoreHasBeenSet() const { return m_scoreHasBeenSet; }

    /**
     * <p> Model confidence in the detected content type. Value range is zero to one,
     * where one is highest confidence.</p>
     */
    inline void SetScore(double value) { m_scoreHasBeenSet = true; m_score = value; }

    /**
     * <p> Model confidence in the detected content type. Value range is zero to one,
     * where one is highest confidence.</p>
     */
    inline ToxicContent& WithScore(double value) { SetScore(value); return *this;}

  private:

    ToxicContentType m_name;
    bool m_nameHasBeenSet = false;

    double m_score;
    bool m_scoreHasBeenSet = false;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws
