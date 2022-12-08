/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace EC2
{
namespace Model
{

  /**
   * <p> Describes the association between an instance and an elastic inference
   * accelerator. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ElasticInferenceAcceleratorAssociation">AWS
   * API Reference</a></p>
   */
  class ElasticInferenceAcceleratorAssociation
  {
  public:
    AWS_EC2_API ElasticInferenceAcceleratorAssociation();
    AWS_EC2_API ElasticInferenceAcceleratorAssociation(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API ElasticInferenceAcceleratorAssociation& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p> The Amazon Resource Name (ARN) of the elastic inference accelerator. </p>
     */
    inline const Aws::String& GetElasticInferenceAcceleratorArn() const{ return m_elasticInferenceAcceleratorArn; }

    /**
     * <p> The Amazon Resource Name (ARN) of the elastic inference accelerator. </p>
     */
    inline bool ElasticInferenceAcceleratorArnHasBeenSet() const { return m_elasticInferenceAcceleratorArnHasBeenSet; }

    /**
     * <p> The Amazon Resource Name (ARN) of the elastic inference accelerator. </p>
     */
    inline void SetElasticInferenceAcceleratorArn(const Aws::String& value) { m_elasticInferenceAcceleratorArnHasBeenSet = true; m_elasticInferenceAcceleratorArn = value; }

    /**
     * <p> The Amazon Resource Name (ARN) of the elastic inference accelerator. </p>
     */
    inline void SetElasticInferenceAcceleratorArn(Aws::String&& value) { m_elasticInferenceAcceleratorArnHasBeenSet = true; m_elasticInferenceAcceleratorArn = std::move(value); }

    /**
     * <p> The Amazon Resource Name (ARN) of the elastic inference accelerator. </p>
     */
    inline void SetElasticInferenceAcceleratorArn(const char* value) { m_elasticInferenceAcceleratorArnHasBeenSet = true; m_elasticInferenceAcceleratorArn.assign(value); }

    /**
     * <p> The Amazon Resource Name (ARN) of the elastic inference accelerator. </p>
     */
    inline ElasticInferenceAcceleratorAssociation& WithElasticInferenceAcceleratorArn(const Aws::String& value) { SetElasticInferenceAcceleratorArn(value); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) of the elastic inference accelerator. </p>
     */
    inline ElasticInferenceAcceleratorAssociation& WithElasticInferenceAcceleratorArn(Aws::String&& value) { SetElasticInferenceAcceleratorArn(std::move(value)); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) of the elastic inference accelerator. </p>
     */
    inline ElasticInferenceAcceleratorAssociation& WithElasticInferenceAcceleratorArn(const char* value) { SetElasticInferenceAcceleratorArn(value); return *this;}


    /**
     * <p> The ID of the association. </p>
     */
    inline const Aws::String& GetElasticInferenceAcceleratorAssociationId() const{ return m_elasticInferenceAcceleratorAssociationId; }

    /**
     * <p> The ID of the association. </p>
     */
    inline bool ElasticInferenceAcceleratorAssociationIdHasBeenSet() const { return m_elasticInferenceAcceleratorAssociationIdHasBeenSet; }

    /**
     * <p> The ID of the association. </p>
     */
    inline void SetElasticInferenceAcceleratorAssociationId(const Aws::String& value) { m_elasticInferenceAcceleratorAssociationIdHasBeenSet = true; m_elasticInferenceAcceleratorAssociationId = value; }

    /**
     * <p> The ID of the association. </p>
     */
    inline void SetElasticInferenceAcceleratorAssociationId(Aws::String&& value) { m_elasticInferenceAcceleratorAssociationIdHasBeenSet = true; m_elasticInferenceAcceleratorAssociationId = std::move(value); }

    /**
     * <p> The ID of the association. </p>
     */
    inline void SetElasticInferenceAcceleratorAssociationId(const char* value) { m_elasticInferenceAcceleratorAssociationIdHasBeenSet = true; m_elasticInferenceAcceleratorAssociationId.assign(value); }

    /**
     * <p> The ID of the association. </p>
     */
    inline ElasticInferenceAcceleratorAssociation& WithElasticInferenceAcceleratorAssociationId(const Aws::String& value) { SetElasticInferenceAcceleratorAssociationId(value); return *this;}

    /**
     * <p> The ID of the association. </p>
     */
    inline ElasticInferenceAcceleratorAssociation& WithElasticInferenceAcceleratorAssociationId(Aws::String&& value) { SetElasticInferenceAcceleratorAssociationId(std::move(value)); return *this;}

    /**
     * <p> The ID of the association. </p>
     */
    inline ElasticInferenceAcceleratorAssociation& WithElasticInferenceAcceleratorAssociationId(const char* value) { SetElasticInferenceAcceleratorAssociationId(value); return *this;}


    /**
     * <p> The state of the elastic inference accelerator. </p>
     */
    inline const Aws::String& GetElasticInferenceAcceleratorAssociationState() const{ return m_elasticInferenceAcceleratorAssociationState; }

    /**
     * <p> The state of the elastic inference accelerator. </p>
     */
    inline bool ElasticInferenceAcceleratorAssociationStateHasBeenSet() const { return m_elasticInferenceAcceleratorAssociationStateHasBeenSet; }

    /**
     * <p> The state of the elastic inference accelerator. </p>
     */
    inline void SetElasticInferenceAcceleratorAssociationState(const Aws::String& value) { m_elasticInferenceAcceleratorAssociationStateHasBeenSet = true; m_elasticInferenceAcceleratorAssociationState = value; }

    /**
     * <p> The state of the elastic inference accelerator. </p>
     */
    inline void SetElasticInferenceAcceleratorAssociationState(Aws::String&& value) { m_elasticInferenceAcceleratorAssociationStateHasBeenSet = true; m_elasticInferenceAcceleratorAssociationState = std::move(value); }

    /**
     * <p> The state of the elastic inference accelerator. </p>
     */
    inline void SetElasticInferenceAcceleratorAssociationState(const char* value) { m_elasticInferenceAcceleratorAssociationStateHasBeenSet = true; m_elasticInferenceAcceleratorAssociationState.assign(value); }

    /**
     * <p> The state of the elastic inference accelerator. </p>
     */
    inline ElasticInferenceAcceleratorAssociation& WithElasticInferenceAcceleratorAssociationState(const Aws::String& value) { SetElasticInferenceAcceleratorAssociationState(value); return *this;}

    /**
     * <p> The state of the elastic inference accelerator. </p>
     */
    inline ElasticInferenceAcceleratorAssociation& WithElasticInferenceAcceleratorAssociationState(Aws::String&& value) { SetElasticInferenceAcceleratorAssociationState(std::move(value)); return *this;}

    /**
     * <p> The state of the elastic inference accelerator. </p>
     */
    inline ElasticInferenceAcceleratorAssociation& WithElasticInferenceAcceleratorAssociationState(const char* value) { SetElasticInferenceAcceleratorAssociationState(value); return *this;}


    /**
     * <p> The time at which the elastic inference accelerator is associated with an
     * instance. </p>
     */
    inline const Aws::Utils::DateTime& GetElasticInferenceAcceleratorAssociationTime() const{ return m_elasticInferenceAcceleratorAssociationTime; }

    /**
     * <p> The time at which the elastic inference accelerator is associated with an
     * instance. </p>
     */
    inline bool ElasticInferenceAcceleratorAssociationTimeHasBeenSet() const { return m_elasticInferenceAcceleratorAssociationTimeHasBeenSet; }

    /**
     * <p> The time at which the elastic inference accelerator is associated with an
     * instance. </p>
     */
    inline void SetElasticInferenceAcceleratorAssociationTime(const Aws::Utils::DateTime& value) { m_elasticInferenceAcceleratorAssociationTimeHasBeenSet = true; m_elasticInferenceAcceleratorAssociationTime = value; }

    /**
     * <p> The time at which the elastic inference accelerator is associated with an
     * instance. </p>
     */
    inline void SetElasticInferenceAcceleratorAssociationTime(Aws::Utils::DateTime&& value) { m_elasticInferenceAcceleratorAssociationTimeHasBeenSet = true; m_elasticInferenceAcceleratorAssociationTime = std::move(value); }

    /**
     * <p> The time at which the elastic inference accelerator is associated with an
     * instance. </p>
     */
    inline ElasticInferenceAcceleratorAssociation& WithElasticInferenceAcceleratorAssociationTime(const Aws::Utils::DateTime& value) { SetElasticInferenceAcceleratorAssociationTime(value); return *this;}

    /**
     * <p> The time at which the elastic inference accelerator is associated with an
     * instance. </p>
     */
    inline ElasticInferenceAcceleratorAssociation& WithElasticInferenceAcceleratorAssociationTime(Aws::Utils::DateTime&& value) { SetElasticInferenceAcceleratorAssociationTime(std::move(value)); return *this;}

  private:

    Aws::String m_elasticInferenceAcceleratorArn;
    bool m_elasticInferenceAcceleratorArnHasBeenSet = false;

    Aws::String m_elasticInferenceAcceleratorAssociationId;
    bool m_elasticInferenceAcceleratorAssociationIdHasBeenSet = false;

    Aws::String m_elasticInferenceAcceleratorAssociationState;
    bool m_elasticInferenceAcceleratorAssociationStateHasBeenSet = false;

    Aws::Utils::DateTime m_elasticInferenceAcceleratorAssociationTime;
    bool m_elasticInferenceAcceleratorAssociationTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
