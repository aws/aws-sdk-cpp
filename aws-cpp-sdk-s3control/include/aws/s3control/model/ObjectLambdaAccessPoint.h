/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3control/S3Control_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace S3Control
{
namespace Model
{

  /**
   * <p>An access point with an attached Lambda function used to access transformed
   * data from an Amazon S3 bucket.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/ObjectLambdaAccessPoint">AWS
   * API Reference</a></p>
   */
  class ObjectLambdaAccessPoint
  {
  public:
    AWS_S3CONTROL_API ObjectLambdaAccessPoint();
    AWS_S3CONTROL_API ObjectLambdaAccessPoint(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_S3CONTROL_API ObjectLambdaAccessPoint& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_S3CONTROL_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p>The name of the Object Lambda Access Point.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the Object Lambda Access Point.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the Object Lambda Access Point.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the Object Lambda Access Point.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the Object Lambda Access Point.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the Object Lambda Access Point.</p>
     */
    inline ObjectLambdaAccessPoint& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the Object Lambda Access Point.</p>
     */
    inline ObjectLambdaAccessPoint& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the Object Lambda Access Point.</p>
     */
    inline ObjectLambdaAccessPoint& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>Specifies the ARN for the Object Lambda Access Point.</p>
     */
    inline const Aws::String& GetObjectLambdaAccessPointArn() const{ return m_objectLambdaAccessPointArn; }

    /**
     * <p>Specifies the ARN for the Object Lambda Access Point.</p>
     */
    inline bool ObjectLambdaAccessPointArnHasBeenSet() const { return m_objectLambdaAccessPointArnHasBeenSet; }

    /**
     * <p>Specifies the ARN for the Object Lambda Access Point.</p>
     */
    inline void SetObjectLambdaAccessPointArn(const Aws::String& value) { m_objectLambdaAccessPointArnHasBeenSet = true; m_objectLambdaAccessPointArn = value; }

    /**
     * <p>Specifies the ARN for the Object Lambda Access Point.</p>
     */
    inline void SetObjectLambdaAccessPointArn(Aws::String&& value) { m_objectLambdaAccessPointArnHasBeenSet = true; m_objectLambdaAccessPointArn = std::move(value); }

    /**
     * <p>Specifies the ARN for the Object Lambda Access Point.</p>
     */
    inline void SetObjectLambdaAccessPointArn(const char* value) { m_objectLambdaAccessPointArnHasBeenSet = true; m_objectLambdaAccessPointArn.assign(value); }

    /**
     * <p>Specifies the ARN for the Object Lambda Access Point.</p>
     */
    inline ObjectLambdaAccessPoint& WithObjectLambdaAccessPointArn(const Aws::String& value) { SetObjectLambdaAccessPointArn(value); return *this;}

    /**
     * <p>Specifies the ARN for the Object Lambda Access Point.</p>
     */
    inline ObjectLambdaAccessPoint& WithObjectLambdaAccessPointArn(Aws::String&& value) { SetObjectLambdaAccessPointArn(std::move(value)); return *this;}

    /**
     * <p>Specifies the ARN for the Object Lambda Access Point.</p>
     */
    inline ObjectLambdaAccessPoint& WithObjectLambdaAccessPointArn(const char* value) { SetObjectLambdaAccessPointArn(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_objectLambdaAccessPointArn;
    bool m_objectLambdaAccessPointArnHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
