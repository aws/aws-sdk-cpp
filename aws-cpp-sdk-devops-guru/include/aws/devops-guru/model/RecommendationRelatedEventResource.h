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
   * <p> Information about an Amazon Web Services resource that emitted and event
   * that is related to a recommendation in an insight. </p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/devops-guru-2020-12-01/RecommendationRelatedEventResource">AWS
   * API Reference</a></p>
   */
  class RecommendationRelatedEventResource
  {
  public:
    AWS_DEVOPSGURU_API RecommendationRelatedEventResource();
    AWS_DEVOPSGURU_API RecommendationRelatedEventResource(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVOPSGURU_API RecommendationRelatedEventResource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVOPSGURU_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The name of the resource that emitted the event. This corresponds to the
     * <code>Name</code> field in an <code>EventResource</code> object. </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p> The name of the resource that emitted the event. This corresponds to the
     * <code>Name</code> field in an <code>EventResource</code> object. </p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p> The name of the resource that emitted the event. This corresponds to the
     * <code>Name</code> field in an <code>EventResource</code> object. </p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p> The name of the resource that emitted the event. This corresponds to the
     * <code>Name</code> field in an <code>EventResource</code> object. </p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p> The name of the resource that emitted the event. This corresponds to the
     * <code>Name</code> field in an <code>EventResource</code> object. </p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p> The name of the resource that emitted the event. This corresponds to the
     * <code>Name</code> field in an <code>EventResource</code> object. </p>
     */
    inline RecommendationRelatedEventResource& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p> The name of the resource that emitted the event. This corresponds to the
     * <code>Name</code> field in an <code>EventResource</code> object. </p>
     */
    inline RecommendationRelatedEventResource& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p> The name of the resource that emitted the event. This corresponds to the
     * <code>Name</code> field in an <code>EventResource</code> object. </p>
     */
    inline RecommendationRelatedEventResource& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p> The type of the resource that emitted the event. This corresponds to the
     * <code>Type</code> field in an <code>EventResource</code> object. </p>
     */
    inline const Aws::String& GetType() const{ return m_type; }

    /**
     * <p> The type of the resource that emitted the event. This corresponds to the
     * <code>Type</code> field in an <code>EventResource</code> object. </p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p> The type of the resource that emitted the event. This corresponds to the
     * <code>Type</code> field in an <code>EventResource</code> object. </p>
     */
    inline void SetType(const Aws::String& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p> The type of the resource that emitted the event. This corresponds to the
     * <code>Type</code> field in an <code>EventResource</code> object. </p>
     */
    inline void SetType(Aws::String&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p> The type of the resource that emitted the event. This corresponds to the
     * <code>Type</code> field in an <code>EventResource</code> object. </p>
     */
    inline void SetType(const char* value) { m_typeHasBeenSet = true; m_type.assign(value); }

    /**
     * <p> The type of the resource that emitted the event. This corresponds to the
     * <code>Type</code> field in an <code>EventResource</code> object. </p>
     */
    inline RecommendationRelatedEventResource& WithType(const Aws::String& value) { SetType(value); return *this;}

    /**
     * <p> The type of the resource that emitted the event. This corresponds to the
     * <code>Type</code> field in an <code>EventResource</code> object. </p>
     */
    inline RecommendationRelatedEventResource& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}

    /**
     * <p> The type of the resource that emitted the event. This corresponds to the
     * <code>Type</code> field in an <code>EventResource</code> object. </p>
     */
    inline RecommendationRelatedEventResource& WithType(const char* value) { SetType(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
