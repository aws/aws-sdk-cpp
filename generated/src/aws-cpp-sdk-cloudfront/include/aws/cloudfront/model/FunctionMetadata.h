/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cloudfront/model/FunctionStage.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace CloudFront
{
namespace Model
{

  /**
   * <p>Contains metadata about a CloudFront function.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/FunctionMetadata">AWS
   * API Reference</a></p>
   */
  class FunctionMetadata
  {
  public:
    AWS_CLOUDFRONT_API FunctionMetadata();
    AWS_CLOUDFRONT_API FunctionMetadata(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFRONT_API FunctionMetadata& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFRONT_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p>The Amazon Resource Name (ARN) of the function. The ARN uniquely identifies
     * the function.</p>
     */
    inline const Aws::String& GetFunctionARN() const{ return m_functionARN; }

    /**
     * <p>The Amazon Resource Name (ARN) of the function. The ARN uniquely identifies
     * the function.</p>
     */
    inline bool FunctionARNHasBeenSet() const { return m_functionARNHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the function. The ARN uniquely identifies
     * the function.</p>
     */
    inline void SetFunctionARN(const Aws::String& value) { m_functionARNHasBeenSet = true; m_functionARN = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the function. The ARN uniquely identifies
     * the function.</p>
     */
    inline void SetFunctionARN(Aws::String&& value) { m_functionARNHasBeenSet = true; m_functionARN = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the function. The ARN uniquely identifies
     * the function.</p>
     */
    inline void SetFunctionARN(const char* value) { m_functionARNHasBeenSet = true; m_functionARN.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the function. The ARN uniquely identifies
     * the function.</p>
     */
    inline FunctionMetadata& WithFunctionARN(const Aws::String& value) { SetFunctionARN(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the function. The ARN uniquely identifies
     * the function.</p>
     */
    inline FunctionMetadata& WithFunctionARN(Aws::String&& value) { SetFunctionARN(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the function. The ARN uniquely identifies
     * the function.</p>
     */
    inline FunctionMetadata& WithFunctionARN(const char* value) { SetFunctionARN(value); return *this;}


    /**
     * <p>The stage that the function is in, either <code>DEVELOPMENT</code> or
     * <code>LIVE</code>.</p> <p>When a function is in the <code>DEVELOPMENT</code>
     * stage, you can test the function with <code>TestFunction</code>, and update it
     * with <code>UpdateFunction</code>.</p> <p>When a function is in the
     * <code>LIVE</code> stage, you can attach the function to a distribution's cache
     * behavior, using the function's ARN.</p>
     */
    inline const FunctionStage& GetStage() const{ return m_stage; }

    /**
     * <p>The stage that the function is in, either <code>DEVELOPMENT</code> or
     * <code>LIVE</code>.</p> <p>When a function is in the <code>DEVELOPMENT</code>
     * stage, you can test the function with <code>TestFunction</code>, and update it
     * with <code>UpdateFunction</code>.</p> <p>When a function is in the
     * <code>LIVE</code> stage, you can attach the function to a distribution's cache
     * behavior, using the function's ARN.</p>
     */
    inline bool StageHasBeenSet() const { return m_stageHasBeenSet; }

    /**
     * <p>The stage that the function is in, either <code>DEVELOPMENT</code> or
     * <code>LIVE</code>.</p> <p>When a function is in the <code>DEVELOPMENT</code>
     * stage, you can test the function with <code>TestFunction</code>, and update it
     * with <code>UpdateFunction</code>.</p> <p>When a function is in the
     * <code>LIVE</code> stage, you can attach the function to a distribution's cache
     * behavior, using the function's ARN.</p>
     */
    inline void SetStage(const FunctionStage& value) { m_stageHasBeenSet = true; m_stage = value; }

    /**
     * <p>The stage that the function is in, either <code>DEVELOPMENT</code> or
     * <code>LIVE</code>.</p> <p>When a function is in the <code>DEVELOPMENT</code>
     * stage, you can test the function with <code>TestFunction</code>, and update it
     * with <code>UpdateFunction</code>.</p> <p>When a function is in the
     * <code>LIVE</code> stage, you can attach the function to a distribution's cache
     * behavior, using the function's ARN.</p>
     */
    inline void SetStage(FunctionStage&& value) { m_stageHasBeenSet = true; m_stage = std::move(value); }

    /**
     * <p>The stage that the function is in, either <code>DEVELOPMENT</code> or
     * <code>LIVE</code>.</p> <p>When a function is in the <code>DEVELOPMENT</code>
     * stage, you can test the function with <code>TestFunction</code>, and update it
     * with <code>UpdateFunction</code>.</p> <p>When a function is in the
     * <code>LIVE</code> stage, you can attach the function to a distribution's cache
     * behavior, using the function's ARN.</p>
     */
    inline FunctionMetadata& WithStage(const FunctionStage& value) { SetStage(value); return *this;}

    /**
     * <p>The stage that the function is in, either <code>DEVELOPMENT</code> or
     * <code>LIVE</code>.</p> <p>When a function is in the <code>DEVELOPMENT</code>
     * stage, you can test the function with <code>TestFunction</code>, and update it
     * with <code>UpdateFunction</code>.</p> <p>When a function is in the
     * <code>LIVE</code> stage, you can attach the function to a distribution's cache
     * behavior, using the function's ARN.</p>
     */
    inline FunctionMetadata& WithStage(FunctionStage&& value) { SetStage(std::move(value)); return *this;}


    /**
     * <p>The date and time when the function was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTime() const{ return m_createdTime; }

    /**
     * <p>The date and time when the function was created.</p>
     */
    inline bool CreatedTimeHasBeenSet() const { return m_createdTimeHasBeenSet; }

    /**
     * <p>The date and time when the function was created.</p>
     */
    inline void SetCreatedTime(const Aws::Utils::DateTime& value) { m_createdTimeHasBeenSet = true; m_createdTime = value; }

    /**
     * <p>The date and time when the function was created.</p>
     */
    inline void SetCreatedTime(Aws::Utils::DateTime&& value) { m_createdTimeHasBeenSet = true; m_createdTime = std::move(value); }

    /**
     * <p>The date and time when the function was created.</p>
     */
    inline FunctionMetadata& WithCreatedTime(const Aws::Utils::DateTime& value) { SetCreatedTime(value); return *this;}

    /**
     * <p>The date and time when the function was created.</p>
     */
    inline FunctionMetadata& WithCreatedTime(Aws::Utils::DateTime&& value) { SetCreatedTime(std::move(value)); return *this;}


    /**
     * <p>The date and time when the function was most recently updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }

    /**
     * <p>The date and time when the function was most recently updated.</p>
     */
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }

    /**
     * <p>The date and time when the function was most recently updated.</p>
     */
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = value; }

    /**
     * <p>The date and time when the function was most recently updated.</p>
     */
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::move(value); }

    /**
     * <p>The date and time when the function was most recently updated.</p>
     */
    inline FunctionMetadata& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}

    /**
     * <p>The date and time when the function was most recently updated.</p>
     */
    inline FunctionMetadata& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}

  private:

    Aws::String m_functionARN;
    bool m_functionARNHasBeenSet = false;

    FunctionStage m_stage;
    bool m_stageHasBeenSet = false;

    Aws::Utils::DateTime m_createdTime;
    bool m_createdTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTime;
    bool m_lastModifiedTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
