/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/clouddirectory/CloudDirectory_EXPORTS.h>
#include <aws/clouddirectory/CloudDirectoryRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace CloudDirectory
{
namespace Model
{

  /**
   */
  class ApplySchemaRequest : public CloudDirectoryRequest
  {
  public:
    AWS_CLOUDDIRECTORY_API ApplySchemaRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ApplySchema"; }

    AWS_CLOUDDIRECTORY_API Aws::String SerializePayload() const override;

    AWS_CLOUDDIRECTORY_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Published schema Amazon Resource Name (ARN) that needs to be copied. For more
     * information, see <a>arns</a>.</p>
     */
    inline const Aws::String& GetPublishedSchemaArn() const { return m_publishedSchemaArn; }
    inline bool PublishedSchemaArnHasBeenSet() const { return m_publishedSchemaArnHasBeenSet; }
    template<typename PublishedSchemaArnT = Aws::String>
    void SetPublishedSchemaArn(PublishedSchemaArnT&& value) { m_publishedSchemaArnHasBeenSet = true; m_publishedSchemaArn = std::forward<PublishedSchemaArnT>(value); }
    template<typename PublishedSchemaArnT = Aws::String>
    ApplySchemaRequest& WithPublishedSchemaArn(PublishedSchemaArnT&& value) { SetPublishedSchemaArn(std::forward<PublishedSchemaArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) that is associated with the <a>Directory</a>
     * into which the schema is copied. For more information, see <a>arns</a>.</p>
     */
    inline const Aws::String& GetDirectoryArn() const { return m_directoryArn; }
    inline bool DirectoryArnHasBeenSet() const { return m_directoryArnHasBeenSet; }
    template<typename DirectoryArnT = Aws::String>
    void SetDirectoryArn(DirectoryArnT&& value) { m_directoryArnHasBeenSet = true; m_directoryArn = std::forward<DirectoryArnT>(value); }
    template<typename DirectoryArnT = Aws::String>
    ApplySchemaRequest& WithDirectoryArn(DirectoryArnT&& value) { SetDirectoryArn(std::forward<DirectoryArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_publishedSchemaArn;
    bool m_publishedSchemaArnHasBeenSet = false;

    Aws::String m_directoryArn;
    bool m_directoryArnHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
