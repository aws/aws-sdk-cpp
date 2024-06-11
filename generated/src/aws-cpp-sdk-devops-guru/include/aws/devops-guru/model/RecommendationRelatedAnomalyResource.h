/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devops-guru/DevOpsGuru_EXPORTS.h>
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
namespace DevOpsGuru
{
namespace Model
{

  /**
   * <p> Information about a resource in which DevOps Guru detected anomalous
   * behavior. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/devops-guru-2020-12-01/RecommendationRelatedAnomalyResource">AWS
   * API Reference</a></p>
   */
  class RecommendationRelatedAnomalyResource
  {
  public:
    AWS_DEVOPSGURU_API RecommendationRelatedAnomalyResource();
    AWS_DEVOPSGURU_API RecommendationRelatedAnomalyResource(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVOPSGURU_API RecommendationRelatedAnomalyResource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVOPSGURU_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The name of the resource. </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline RecommendationRelatedAnomalyResource& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline RecommendationRelatedAnomalyResource& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline RecommendationRelatedAnomalyResource& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The type of the resource. Resource types take the same form that is used by
     * Amazon Web Services CloudFormation resource type identifiers,
     * <code>service-provider::service-name::data-type-name</code>. For example,
     * <code>AWS::RDS::DBCluster</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-template-resource-type-ref.html">Amazon
     * Web Services resource and property types reference</a> in the <i>Amazon Web
     * Services CloudFormation User Guide</i>.</p>
     */
    inline const Aws::String& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const Aws::String& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(Aws::String&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline void SetType(const char* value) { m_typeHasBeenSet = true; m_type.assign(value); }
    inline RecommendationRelatedAnomalyResource& WithType(const Aws::String& value) { SetType(value); return *this;}
    inline RecommendationRelatedAnomalyResource& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}
    inline RecommendationRelatedAnomalyResource& WithType(const char* value) { SetType(value); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
