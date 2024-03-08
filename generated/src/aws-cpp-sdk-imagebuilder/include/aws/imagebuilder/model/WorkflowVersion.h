/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/imagebuilder/Imagebuilder_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/imagebuilder/model/WorkflowType.h>
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
namespace imagebuilder
{
namespace Model
{

  /**
   * <p>Contains details about this version of the workflow.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/WorkflowVersion">AWS
   * API Reference</a></p>
   */
  class WorkflowVersion
  {
  public:
    AWS_IMAGEBUILDER_API WorkflowVersion();
    AWS_IMAGEBUILDER_API WorkflowVersion(Aws::Utils::Json::JsonView jsonValue);
    AWS_IMAGEBUILDER_API WorkflowVersion& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IMAGEBUILDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the workflow resource.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the workflow resource.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the workflow resource.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the workflow resource.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the workflow resource.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the workflow resource.</p>
     */
    inline WorkflowVersion& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the workflow resource.</p>
     */
    inline WorkflowVersion& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the workflow resource.</p>
     */
    inline WorkflowVersion& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The name of the workflow.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the workflow.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the workflow.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the workflow.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the workflow.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the workflow.</p>
     */
    inline WorkflowVersion& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the workflow.</p>
     */
    inline WorkflowVersion& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the workflow.</p>
     */
    inline WorkflowVersion& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The semantic version of the workflow resource. The format includes three
     * nodes: &lt;major&gt;.&lt;minor&gt;.&lt;patch&gt;.</p>
     */
    inline const Aws::String& GetVersion() const{ return m_version; }

    /**
     * <p>The semantic version of the workflow resource. The format includes three
     * nodes: &lt;major&gt;.&lt;minor&gt;.&lt;patch&gt;.</p>
     */
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }

    /**
     * <p>The semantic version of the workflow resource. The format includes three
     * nodes: &lt;major&gt;.&lt;minor&gt;.&lt;patch&gt;.</p>
     */
    inline void SetVersion(const Aws::String& value) { m_versionHasBeenSet = true; m_version = value; }

    /**
     * <p>The semantic version of the workflow resource. The format includes three
     * nodes: &lt;major&gt;.&lt;minor&gt;.&lt;patch&gt;.</p>
     */
    inline void SetVersion(Aws::String&& value) { m_versionHasBeenSet = true; m_version = std::move(value); }

    /**
     * <p>The semantic version of the workflow resource. The format includes three
     * nodes: &lt;major&gt;.&lt;minor&gt;.&lt;patch&gt;.</p>
     */
    inline void SetVersion(const char* value) { m_versionHasBeenSet = true; m_version.assign(value); }

    /**
     * <p>The semantic version of the workflow resource. The format includes three
     * nodes: &lt;major&gt;.&lt;minor&gt;.&lt;patch&gt;.</p>
     */
    inline WorkflowVersion& WithVersion(const Aws::String& value) { SetVersion(value); return *this;}

    /**
     * <p>The semantic version of the workflow resource. The format includes three
     * nodes: &lt;major&gt;.&lt;minor&gt;.&lt;patch&gt;.</p>
     */
    inline WorkflowVersion& WithVersion(Aws::String&& value) { SetVersion(std::move(value)); return *this;}

    /**
     * <p>The semantic version of the workflow resource. The format includes three
     * nodes: &lt;major&gt;.&lt;minor&gt;.&lt;patch&gt;.</p>
     */
    inline WorkflowVersion& WithVersion(const char* value) { SetVersion(value); return *this;}


    /**
     * <p>Describes the workflow.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>Describes the workflow.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>Describes the workflow.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>Describes the workflow.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>Describes the workflow.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>Describes the workflow.</p>
     */
    inline WorkflowVersion& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>Describes the workflow.</p>
     */
    inline WorkflowVersion& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>Describes the workflow.</p>
     */
    inline WorkflowVersion& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The image creation stage that this workflow applies to. Image Builder
     * currently supports build and test stage workflows.</p>
     */
    inline const WorkflowType& GetType() const{ return m_type; }

    /**
     * <p>The image creation stage that this workflow applies to. Image Builder
     * currently supports build and test stage workflows.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The image creation stage that this workflow applies to. Image Builder
     * currently supports build and test stage workflows.</p>
     */
    inline void SetType(const WorkflowType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The image creation stage that this workflow applies to. Image Builder
     * currently supports build and test stage workflows.</p>
     */
    inline void SetType(WorkflowType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The image creation stage that this workflow applies to. Image Builder
     * currently supports build and test stage workflows.</p>
     */
    inline WorkflowVersion& WithType(const WorkflowType& value) { SetType(value); return *this;}

    /**
     * <p>The image creation stage that this workflow applies to. Image Builder
     * currently supports build and test stage workflows.</p>
     */
    inline WorkflowVersion& WithType(WorkflowType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>The owner of the workflow resource.</p>
     */
    inline const Aws::String& GetOwner() const{ return m_owner; }

    /**
     * <p>The owner of the workflow resource.</p>
     */
    inline bool OwnerHasBeenSet() const { return m_ownerHasBeenSet; }

    /**
     * <p>The owner of the workflow resource.</p>
     */
    inline void SetOwner(const Aws::String& value) { m_ownerHasBeenSet = true; m_owner = value; }

    /**
     * <p>The owner of the workflow resource.</p>
     */
    inline void SetOwner(Aws::String&& value) { m_ownerHasBeenSet = true; m_owner = std::move(value); }

    /**
     * <p>The owner of the workflow resource.</p>
     */
    inline void SetOwner(const char* value) { m_ownerHasBeenSet = true; m_owner.assign(value); }

    /**
     * <p>The owner of the workflow resource.</p>
     */
    inline WorkflowVersion& WithOwner(const Aws::String& value) { SetOwner(value); return *this;}

    /**
     * <p>The owner of the workflow resource.</p>
     */
    inline WorkflowVersion& WithOwner(Aws::String&& value) { SetOwner(std::move(value)); return *this;}

    /**
     * <p>The owner of the workflow resource.</p>
     */
    inline WorkflowVersion& WithOwner(const char* value) { SetOwner(value); return *this;}


    /**
     * <p>The timestamp when Image Builder created the workflow version.</p>
     */
    inline const Aws::String& GetDateCreated() const{ return m_dateCreated; }

    /**
     * <p>The timestamp when Image Builder created the workflow version.</p>
     */
    inline bool DateCreatedHasBeenSet() const { return m_dateCreatedHasBeenSet; }

    /**
     * <p>The timestamp when Image Builder created the workflow version.</p>
     */
    inline void SetDateCreated(const Aws::String& value) { m_dateCreatedHasBeenSet = true; m_dateCreated = value; }

    /**
     * <p>The timestamp when Image Builder created the workflow version.</p>
     */
    inline void SetDateCreated(Aws::String&& value) { m_dateCreatedHasBeenSet = true; m_dateCreated = std::move(value); }

    /**
     * <p>The timestamp when Image Builder created the workflow version.</p>
     */
    inline void SetDateCreated(const char* value) { m_dateCreatedHasBeenSet = true; m_dateCreated.assign(value); }

    /**
     * <p>The timestamp when Image Builder created the workflow version.</p>
     */
    inline WorkflowVersion& WithDateCreated(const Aws::String& value) { SetDateCreated(value); return *this;}

    /**
     * <p>The timestamp when Image Builder created the workflow version.</p>
     */
    inline WorkflowVersion& WithDateCreated(Aws::String&& value) { SetDateCreated(std::move(value)); return *this;}

    /**
     * <p>The timestamp when Image Builder created the workflow version.</p>
     */
    inline WorkflowVersion& WithDateCreated(const char* value) { SetDateCreated(value); return *this;}

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_version;
    bool m_versionHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    WorkflowType m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_owner;
    bool m_ownerHasBeenSet = false;

    Aws::String m_dateCreated;
    bool m_dateCreatedHasBeenSet = false;
  };

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
