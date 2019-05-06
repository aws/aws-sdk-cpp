/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/ds/DirectoryService_EXPORTS.h>
#include <aws/ds/DirectoryServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace DirectoryService
{
namespace Model
{

  /**
   * <p>Contains the inputs for the <a>CreateAlias</a> operation.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/CreateAliasRequest">AWS
   * API Reference</a></p>
   */
  class AWS_DIRECTORYSERVICE_API CreateAliasRequest : public DirectoryServiceRequest
  {
  public:
    CreateAliasRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateAlias"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The identifier of the directory for which to create the alias.</p>
     */
    inline const Aws::String& GetDirectoryId() const{ return m_directoryId; }

    /**
     * <p>The identifier of the directory for which to create the alias.</p>
     */
    inline bool DirectoryIdHasBeenSet() const { return m_directoryIdHasBeenSet; }

    /**
     * <p>The identifier of the directory for which to create the alias.</p>
     */
    inline void SetDirectoryId(const Aws::String& value) { m_directoryIdHasBeenSet = true; m_directoryId = value; }

    /**
     * <p>The identifier of the directory for which to create the alias.</p>
     */
    inline void SetDirectoryId(Aws::String&& value) { m_directoryIdHasBeenSet = true; m_directoryId = std::move(value); }

    /**
     * <p>The identifier of the directory for which to create the alias.</p>
     */
    inline void SetDirectoryId(const char* value) { m_directoryIdHasBeenSet = true; m_directoryId.assign(value); }

    /**
     * <p>The identifier of the directory for which to create the alias.</p>
     */
    inline CreateAliasRequest& WithDirectoryId(const Aws::String& value) { SetDirectoryId(value); return *this;}

    /**
     * <p>The identifier of the directory for which to create the alias.</p>
     */
    inline CreateAliasRequest& WithDirectoryId(Aws::String&& value) { SetDirectoryId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the directory for which to create the alias.</p>
     */
    inline CreateAliasRequest& WithDirectoryId(const char* value) { SetDirectoryId(value); return *this;}


    /**
     * <p>The requested alias.</p> <p>The alias must be unique amongst all aliases in
     * AWS. This operation throws an <code>EntityAlreadyExistsException</code> error if
     * the alias already exists.</p>
     */
    inline const Aws::String& GetAlias() const{ return m_alias; }

    /**
     * <p>The requested alias.</p> <p>The alias must be unique amongst all aliases in
     * AWS. This operation throws an <code>EntityAlreadyExistsException</code> error if
     * the alias already exists.</p>
     */
    inline bool AliasHasBeenSet() const { return m_aliasHasBeenSet; }

    /**
     * <p>The requested alias.</p> <p>The alias must be unique amongst all aliases in
     * AWS. This operation throws an <code>EntityAlreadyExistsException</code> error if
     * the alias already exists.</p>
     */
    inline void SetAlias(const Aws::String& value) { m_aliasHasBeenSet = true; m_alias = value; }

    /**
     * <p>The requested alias.</p> <p>The alias must be unique amongst all aliases in
     * AWS. This operation throws an <code>EntityAlreadyExistsException</code> error if
     * the alias already exists.</p>
     */
    inline void SetAlias(Aws::String&& value) { m_aliasHasBeenSet = true; m_alias = std::move(value); }

    /**
     * <p>The requested alias.</p> <p>The alias must be unique amongst all aliases in
     * AWS. This operation throws an <code>EntityAlreadyExistsException</code> error if
     * the alias already exists.</p>
     */
    inline void SetAlias(const char* value) { m_aliasHasBeenSet = true; m_alias.assign(value); }

    /**
     * <p>The requested alias.</p> <p>The alias must be unique amongst all aliases in
     * AWS. This operation throws an <code>EntityAlreadyExistsException</code> error if
     * the alias already exists.</p>
     */
    inline CreateAliasRequest& WithAlias(const Aws::String& value) { SetAlias(value); return *this;}

    /**
     * <p>The requested alias.</p> <p>The alias must be unique amongst all aliases in
     * AWS. This operation throws an <code>EntityAlreadyExistsException</code> error if
     * the alias already exists.</p>
     */
    inline CreateAliasRequest& WithAlias(Aws::String&& value) { SetAlias(std::move(value)); return *this;}

    /**
     * <p>The requested alias.</p> <p>The alias must be unique amongst all aliases in
     * AWS. This operation throws an <code>EntityAlreadyExistsException</code> error if
     * the alias already exists.</p>
     */
    inline CreateAliasRequest& WithAlias(const char* value) { SetAlias(value); return *this;}

  private:

    Aws::String m_directoryId;
    bool m_directoryIdHasBeenSet;

    Aws::String m_alias;
    bool m_aliasHasBeenSet;
  };

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
