/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/AWSMigrationHub/MigrationHub_EXPORTS.h>
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
namespace MigrationHub
{
namespace Model
{

  /**
   * <p>A source resource can be a source server, a migration wave, an application,
   * or any other resource that you track.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/AWSMigrationHub-2017-05-31/SourceResource">AWS
   * API Reference</a></p>
   */
  class SourceResource
  {
  public:
    AWS_MIGRATIONHUB_API SourceResource();
    AWS_MIGRATIONHUB_API SourceResource(Aws::Utils::Json::JsonView jsonValue);
    AWS_MIGRATIONHUB_API SourceResource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MIGRATIONHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>This is the name that you want to use to identify the resource. If the
     * resource is an AWS resource, we recommend that you set this parameter to the ARN
     * of the resource.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline SourceResource& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline SourceResource& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline SourceResource& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description that can be free-form text to record additional detail about
     * the resource for clarity or later reference.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline SourceResource& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline SourceResource& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline SourceResource& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A free-form description of the status of the resource.</p>
     */
    inline const Aws::String& GetStatusDetail() const{ return m_statusDetail; }
    inline bool StatusDetailHasBeenSet() const { return m_statusDetailHasBeenSet; }
    inline void SetStatusDetail(const Aws::String& value) { m_statusDetailHasBeenSet = true; m_statusDetail = value; }
    inline void SetStatusDetail(Aws::String&& value) { m_statusDetailHasBeenSet = true; m_statusDetail = std::move(value); }
    inline void SetStatusDetail(const char* value) { m_statusDetailHasBeenSet = true; m_statusDetail.assign(value); }
    inline SourceResource& WithStatusDetail(const Aws::String& value) { SetStatusDetail(value); return *this;}
    inline SourceResource& WithStatusDetail(Aws::String&& value) { SetStatusDetail(std::move(value)); return *this;}
    inline SourceResource& WithStatusDetail(const char* value) { SetStatusDetail(value); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_statusDetail;
    bool m_statusDetailHasBeenSet = false;
  };

} // namespace Model
} // namespace MigrationHub
} // namespace Aws
