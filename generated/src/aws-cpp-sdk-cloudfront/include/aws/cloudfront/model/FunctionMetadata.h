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
    AWS_CLOUDFRONT_API FunctionMetadata() = default;
    AWS_CLOUDFRONT_API FunctionMetadata(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFRONT_API FunctionMetadata& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFRONT_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the function. The ARN uniquely identifies
     * the function.</p>
     */
    inline const Aws::String& GetFunctionARN() const { return m_functionARN; }
    inline bool FunctionARNHasBeenSet() const { return m_functionARNHasBeenSet; }
    template<typename FunctionARNT = Aws::String>
    void SetFunctionARN(FunctionARNT&& value) { m_functionARNHasBeenSet = true; m_functionARN = std::forward<FunctionARNT>(value); }
    template<typename FunctionARNT = Aws::String>
    FunctionMetadata& WithFunctionARN(FunctionARNT&& value) { SetFunctionARN(std::forward<FunctionARNT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The stage that the function is in, either <code>DEVELOPMENT</code> or
     * <code>LIVE</code>.</p> <p>When a function is in the <code>DEVELOPMENT</code>
     * stage, you can test the function with <code>TestFunction</code>, and update it
     * with <code>UpdateFunction</code>.</p> <p>When a function is in the
     * <code>LIVE</code> stage, you can attach the function to a distribution's cache
     * behavior, using the function's ARN.</p>
     */
    inline FunctionStage GetStage() const { return m_stage; }
    inline bool StageHasBeenSet() const { return m_stageHasBeenSet; }
    inline void SetStage(FunctionStage value) { m_stageHasBeenSet = true; m_stage = value; }
    inline FunctionMetadata& WithStage(FunctionStage value) { SetStage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the function was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTime() const { return m_createdTime; }
    inline bool CreatedTimeHasBeenSet() const { return m_createdTimeHasBeenSet; }
    template<typename CreatedTimeT = Aws::Utils::DateTime>
    void SetCreatedTime(CreatedTimeT&& value) { m_createdTimeHasBeenSet = true; m_createdTime = std::forward<CreatedTimeT>(value); }
    template<typename CreatedTimeT = Aws::Utils::DateTime>
    FunctionMetadata& WithCreatedTime(CreatedTimeT&& value) { SetCreatedTime(std::forward<CreatedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the function was most recently updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const { return m_lastModifiedTime; }
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    void SetLastModifiedTime(LastModifiedTimeT&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::forward<LastModifiedTimeT>(value); }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    FunctionMetadata& WithLastModifiedTime(LastModifiedTimeT&& value) { SetLastModifiedTime(std::forward<LastModifiedTimeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_functionARN;
    bool m_functionARNHasBeenSet = false;

    FunctionStage m_stage{FunctionStage::NOT_SET};
    bool m_stageHasBeenSet = false;

    Aws::Utils::DateTime m_createdTime{};
    bool m_createdTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTime{};
    bool m_lastModifiedTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
