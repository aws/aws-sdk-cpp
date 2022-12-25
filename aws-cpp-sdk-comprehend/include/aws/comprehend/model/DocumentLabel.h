/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/comprehend/Comprehend_EXPORTS.h>
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
namespace Comprehend
{
namespace Model
{

  /**
   * <p>Specifies one of the label or labels that categorize the document being
   * analyzed.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/DocumentLabel">AWS
   * API Reference</a></p>
   */
  class DocumentLabel
  {
  public:
    AWS_COMPREHEND_API DocumentLabel();
    AWS_COMPREHEND_API DocumentLabel(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHEND_API DocumentLabel& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHEND_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the label.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the label.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the label.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the label.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the label.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the label.</p>
     */
    inline DocumentLabel& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the label.</p>
     */
    inline DocumentLabel& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the label.</p>
     */
    inline DocumentLabel& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The confidence score that Amazon Comprehend has this label correctly
     * attributed.</p>
     */
    inline double GetScore() const{ return m_score; }

    /**
     * <p>The confidence score that Amazon Comprehend has this label correctly
     * attributed.</p>
     */
    inline bool ScoreHasBeenSet() const { return m_scoreHasBeenSet; }

    /**
     * <p>The confidence score that Amazon Comprehend has this label correctly
     * attributed.</p>
     */
    inline void SetScore(double value) { m_scoreHasBeenSet = true; m_score = value; }

    /**
     * <p>The confidence score that Amazon Comprehend has this label correctly
     * attributed.</p>
     */
    inline DocumentLabel& WithScore(double value) { SetScore(value); return *this;}


    /**
     * <p>Page number where the label occurs. This field is present in the response
     * only if your request includes the <code>Byte</code> parameter. </p>
     */
    inline int GetPage() const{ return m_page; }

    /**
     * <p>Page number where the label occurs. This field is present in the response
     * only if your request includes the <code>Byte</code> parameter. </p>
     */
    inline bool PageHasBeenSet() const { return m_pageHasBeenSet; }

    /**
     * <p>Page number where the label occurs. This field is present in the response
     * only if your request includes the <code>Byte</code> parameter. </p>
     */
    inline void SetPage(int value) { m_pageHasBeenSet = true; m_page = value; }

    /**
     * <p>Page number where the label occurs. This field is present in the response
     * only if your request includes the <code>Byte</code> parameter. </p>
     */
    inline DocumentLabel& WithPage(int value) { SetPage(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    double m_score;
    bool m_scoreHasBeenSet = false;

    int m_page;
    bool m_pageHasBeenSet = false;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws
