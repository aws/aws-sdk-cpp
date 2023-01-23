/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fsx/FSx_EXPORTS.h>
#include <aws/fsx/FSxRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace FSx
{
namespace Model
{

  /**
   */
  class DeleteDataRepositoryAssociationRequest : public FSxRequest
  {
  public:
    AWS_FSX_API DeleteDataRepositoryAssociationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteDataRepositoryAssociation"; }

    AWS_FSX_API Aws::String SerializePayload() const override;

    AWS_FSX_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ID of the data repository association that you want to delete.</p>
     */
    inline const Aws::String& GetAssociationId() const{ return m_associationId; }

    /**
     * <p>The ID of the data repository association that you want to delete.</p>
     */
    inline bool AssociationIdHasBeenSet() const { return m_associationIdHasBeenSet; }

    /**
     * <p>The ID of the data repository association that you want to delete.</p>
     */
    inline void SetAssociationId(const Aws::String& value) { m_associationIdHasBeenSet = true; m_associationId = value; }

    /**
     * <p>The ID of the data repository association that you want to delete.</p>
     */
    inline void SetAssociationId(Aws::String&& value) { m_associationIdHasBeenSet = true; m_associationId = std::move(value); }

    /**
     * <p>The ID of the data repository association that you want to delete.</p>
     */
    inline void SetAssociationId(const char* value) { m_associationIdHasBeenSet = true; m_associationId.assign(value); }

    /**
     * <p>The ID of the data repository association that you want to delete.</p>
     */
    inline DeleteDataRepositoryAssociationRequest& WithAssociationId(const Aws::String& value) { SetAssociationId(value); return *this;}

    /**
     * <p>The ID of the data repository association that you want to delete.</p>
     */
    inline DeleteDataRepositoryAssociationRequest& WithAssociationId(Aws::String&& value) { SetAssociationId(std::move(value)); return *this;}

    /**
     * <p>The ID of the data repository association that you want to delete.</p>
     */
    inline DeleteDataRepositoryAssociationRequest& WithAssociationId(const char* value) { SetAssociationId(value); return *this;}


    
    inline const Aws::String& GetClientRequestToken() const{ return m_clientRequestToken; }

    
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }

    
    inline void SetClientRequestToken(const Aws::String& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = value; }

    
    inline void SetClientRequestToken(Aws::String&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::move(value); }

    
    inline void SetClientRequestToken(const char* value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken.assign(value); }

    
    inline DeleteDataRepositoryAssociationRequest& WithClientRequestToken(const Aws::String& value) { SetClientRequestToken(value); return *this;}

    
    inline DeleteDataRepositoryAssociationRequest& WithClientRequestToken(Aws::String&& value) { SetClientRequestToken(std::move(value)); return *this;}

    
    inline DeleteDataRepositoryAssociationRequest& WithClientRequestToken(const char* value) { SetClientRequestToken(value); return *this;}


    /**
     * <p>Set to <code>true</code> to delete the data in the file system that
     * corresponds to the data repository association.</p>
     */
    inline bool GetDeleteDataInFileSystem() const{ return m_deleteDataInFileSystem; }

    /**
     * <p>Set to <code>true</code> to delete the data in the file system that
     * corresponds to the data repository association.</p>
     */
    inline bool DeleteDataInFileSystemHasBeenSet() const { return m_deleteDataInFileSystemHasBeenSet; }

    /**
     * <p>Set to <code>true</code> to delete the data in the file system that
     * corresponds to the data repository association.</p>
     */
    inline void SetDeleteDataInFileSystem(bool value) { m_deleteDataInFileSystemHasBeenSet = true; m_deleteDataInFileSystem = value; }

    /**
     * <p>Set to <code>true</code> to delete the data in the file system that
     * corresponds to the data repository association.</p>
     */
    inline DeleteDataRepositoryAssociationRequest& WithDeleteDataInFileSystem(bool value) { SetDeleteDataInFileSystem(value); return *this;}

  private:

    Aws::String m_associationId;
    bool m_associationIdHasBeenSet = false;

    Aws::String m_clientRequestToken;
    bool m_clientRequestTokenHasBeenSet = false;

    bool m_deleteDataInFileSystem;
    bool m_deleteDataInFileSystemHasBeenSet = false;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
