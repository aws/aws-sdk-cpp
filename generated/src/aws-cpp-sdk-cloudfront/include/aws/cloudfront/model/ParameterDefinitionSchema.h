/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/cloudfront/model/StringSchemaConfig.h>
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
   * <p>An object that contains information about the parameter
   * definition.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/ParameterDefinitionSchema">AWS
   * API Reference</a></p>
   */
  class ParameterDefinitionSchema
  {
  public:
    AWS_CLOUDFRONT_API ParameterDefinitionSchema() = default;
    AWS_CLOUDFRONT_API ParameterDefinitionSchema(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFRONT_API ParameterDefinitionSchema& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFRONT_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p>An object that contains information about the string schema.</p>
     */
    inline const StringSchemaConfig& GetStringSchema() const { return m_stringSchema; }
    inline bool StringSchemaHasBeenSet() const { return m_stringSchemaHasBeenSet; }
    template<typename StringSchemaT = StringSchemaConfig>
    void SetStringSchema(StringSchemaT&& value) { m_stringSchemaHasBeenSet = true; m_stringSchema = std::forward<StringSchemaT>(value); }
    template<typename StringSchemaT = StringSchemaConfig>
    ParameterDefinitionSchema& WithStringSchema(StringSchemaT&& value) { SetStringSchema(std::forward<StringSchemaT>(value)); return *this;}
    ///@}
  private:

    StringSchemaConfig m_stringSchema;
    bool m_stringSchemaHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
