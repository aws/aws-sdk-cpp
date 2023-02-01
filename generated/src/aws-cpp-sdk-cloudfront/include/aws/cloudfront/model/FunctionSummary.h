/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cloudfront/model/FunctionConfig.h>
#include <aws/cloudfront/model/FunctionMetadata.h>
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
   * <p>Contains configuration information and metadata about a CloudFront
   * function.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/FunctionSummary">AWS
   * API Reference</a></p>
   */
  class FunctionSummary
  {
  public:
    AWS_CLOUDFRONT_API FunctionSummary();
    AWS_CLOUDFRONT_API FunctionSummary(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFRONT_API FunctionSummary& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFRONT_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p>The name of the CloudFront function.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the CloudFront function.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the CloudFront function.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the CloudFront function.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the CloudFront function.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the CloudFront function.</p>
     */
    inline FunctionSummary& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the CloudFront function.</p>
     */
    inline FunctionSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the CloudFront function.</p>
     */
    inline FunctionSummary& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The status of the CloudFront function.</p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the CloudFront function.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the CloudFront function.</p>
     */
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the CloudFront function.</p>
     */
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the CloudFront function.</p>
     */
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }

    /**
     * <p>The status of the CloudFront function.</p>
     */
    inline FunctionSummary& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the CloudFront function.</p>
     */
    inline FunctionSummary& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}

    /**
     * <p>The status of the CloudFront function.</p>
     */
    inline FunctionSummary& WithStatus(const char* value) { SetStatus(value); return *this;}


    /**
     * <p>Contains configuration information about a CloudFront function.</p>
     */
    inline const FunctionConfig& GetFunctionConfig() const{ return m_functionConfig; }

    /**
     * <p>Contains configuration information about a CloudFront function.</p>
     */
    inline bool FunctionConfigHasBeenSet() const { return m_functionConfigHasBeenSet; }

    /**
     * <p>Contains configuration information about a CloudFront function.</p>
     */
    inline void SetFunctionConfig(const FunctionConfig& value) { m_functionConfigHasBeenSet = true; m_functionConfig = value; }

    /**
     * <p>Contains configuration information about a CloudFront function.</p>
     */
    inline void SetFunctionConfig(FunctionConfig&& value) { m_functionConfigHasBeenSet = true; m_functionConfig = std::move(value); }

    /**
     * <p>Contains configuration information about a CloudFront function.</p>
     */
    inline FunctionSummary& WithFunctionConfig(const FunctionConfig& value) { SetFunctionConfig(value); return *this;}

    /**
     * <p>Contains configuration information about a CloudFront function.</p>
     */
    inline FunctionSummary& WithFunctionConfig(FunctionConfig&& value) { SetFunctionConfig(std::move(value)); return *this;}


    /**
     * <p>Contains metadata about a CloudFront function.</p>
     */
    inline const FunctionMetadata& GetFunctionMetadata() const{ return m_functionMetadata; }

    /**
     * <p>Contains metadata about a CloudFront function.</p>
     */
    inline bool FunctionMetadataHasBeenSet() const { return m_functionMetadataHasBeenSet; }

    /**
     * <p>Contains metadata about a CloudFront function.</p>
     */
    inline void SetFunctionMetadata(const FunctionMetadata& value) { m_functionMetadataHasBeenSet = true; m_functionMetadata = value; }

    /**
     * <p>Contains metadata about a CloudFront function.</p>
     */
    inline void SetFunctionMetadata(FunctionMetadata&& value) { m_functionMetadataHasBeenSet = true; m_functionMetadata = std::move(value); }

    /**
     * <p>Contains metadata about a CloudFront function.</p>
     */
    inline FunctionSummary& WithFunctionMetadata(const FunctionMetadata& value) { SetFunctionMetadata(value); return *this;}

    /**
     * <p>Contains metadata about a CloudFront function.</p>
     */
    inline FunctionSummary& WithFunctionMetadata(FunctionMetadata&& value) { SetFunctionMetadata(std::move(value)); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    FunctionConfig m_functionConfig;
    bool m_functionConfigHasBeenSet = false;

    FunctionMetadata m_functionMetadata;
    bool m_functionMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
