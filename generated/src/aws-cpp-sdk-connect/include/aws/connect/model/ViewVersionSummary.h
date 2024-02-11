/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connect/model/ViewType.h>
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
namespace Connect
{
namespace Model
{

  /**
   * <p>A summary of a view version's metadata.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ViewVersionSummary">AWS
   * API Reference</a></p>
   */
  class ViewVersionSummary
  {
  public:
    AWS_CONNECT_API ViewVersionSummary();
    AWS_CONNECT_API ViewVersionSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API ViewVersionSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The identifier of the view version.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The identifier of the view version.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The identifier of the view version.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The identifier of the view version.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The identifier of the view version.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The identifier of the view version.</p>
     */
    inline ViewVersionSummary& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The identifier of the view version.</p>
     */
    inline ViewVersionSummary& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the view version.</p>
     */
    inline ViewVersionSummary& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the view version.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the view version.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the view version.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the view version.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the view version.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the view version.</p>
     */
    inline ViewVersionSummary& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the view version.</p>
     */
    inline ViewVersionSummary& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the view version.</p>
     */
    inline ViewVersionSummary& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The description of the view version.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the view version.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the view version.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the view version.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the view version.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the view version.</p>
     */
    inline ViewVersionSummary& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the view version.</p>
     */
    inline ViewVersionSummary& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the view version.</p>
     */
    inline ViewVersionSummary& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The name of the view version.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the view version.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the view version.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the view version.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the view version.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the view version.</p>
     */
    inline ViewVersionSummary& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the view version.</p>
     */
    inline ViewVersionSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the view version.</p>
     */
    inline ViewVersionSummary& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The type of the view version.</p>
     */
    inline const ViewType& GetType() const{ return m_type; }

    /**
     * <p>The type of the view version.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of the view version.</p>
     */
    inline void SetType(const ViewType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of the view version.</p>
     */
    inline void SetType(ViewType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of the view version.</p>
     */
    inline ViewVersionSummary& WithType(const ViewType& value) { SetType(value); return *this;}

    /**
     * <p>The type of the view version.</p>
     */
    inline ViewVersionSummary& WithType(ViewType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>The sequentially incremented version of the view version.</p>
     */
    inline int GetVersion() const{ return m_version; }

    /**
     * <p>The sequentially incremented version of the view version.</p>
     */
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }

    /**
     * <p>The sequentially incremented version of the view version.</p>
     */
    inline void SetVersion(int value) { m_versionHasBeenSet = true; m_version = value; }

    /**
     * <p>The sequentially incremented version of the view version.</p>
     */
    inline ViewVersionSummary& WithVersion(int value) { SetVersion(value); return *this;}


    /**
     * <p>The description of the view version.</p>
     */
    inline const Aws::String& GetVersionDescription() const{ return m_versionDescription; }

    /**
     * <p>The description of the view version.</p>
     */
    inline bool VersionDescriptionHasBeenSet() const { return m_versionDescriptionHasBeenSet; }

    /**
     * <p>The description of the view version.</p>
     */
    inline void SetVersionDescription(const Aws::String& value) { m_versionDescriptionHasBeenSet = true; m_versionDescription = value; }

    /**
     * <p>The description of the view version.</p>
     */
    inline void SetVersionDescription(Aws::String&& value) { m_versionDescriptionHasBeenSet = true; m_versionDescription = std::move(value); }

    /**
     * <p>The description of the view version.</p>
     */
    inline void SetVersionDescription(const char* value) { m_versionDescriptionHasBeenSet = true; m_versionDescription.assign(value); }

    /**
     * <p>The description of the view version.</p>
     */
    inline ViewVersionSummary& WithVersionDescription(const Aws::String& value) { SetVersionDescription(value); return *this;}

    /**
     * <p>The description of the view version.</p>
     */
    inline ViewVersionSummary& WithVersionDescription(Aws::String&& value) { SetVersionDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the view version.</p>
     */
    inline ViewVersionSummary& WithVersionDescription(const char* value) { SetVersionDescription(value); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    ViewType m_type;
    bool m_typeHasBeenSet = false;

    int m_version;
    bool m_versionHasBeenSet = false;

    Aws::String m_versionDescription;
    bool m_versionDescriptionHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
