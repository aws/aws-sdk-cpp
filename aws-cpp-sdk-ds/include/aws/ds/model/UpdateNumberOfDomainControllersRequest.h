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
   */
  class AWS_DIRECTORYSERVICE_API UpdateNumberOfDomainControllersRequest : public DirectoryServiceRequest
  {
  public:
    UpdateNumberOfDomainControllersRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateNumberOfDomainControllers"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Identifier of the directory to which the domain controllers will be added or
     * removed.</p>
     */
    inline const Aws::String& GetDirectoryId() const{ return m_directoryId; }

    /**
     * <p>Identifier of the directory to which the domain controllers will be added or
     * removed.</p>
     */
    inline bool DirectoryIdHasBeenSet() const { return m_directoryIdHasBeenSet; }

    /**
     * <p>Identifier of the directory to which the domain controllers will be added or
     * removed.</p>
     */
    inline void SetDirectoryId(const Aws::String& value) { m_directoryIdHasBeenSet = true; m_directoryId = value; }

    /**
     * <p>Identifier of the directory to which the domain controllers will be added or
     * removed.</p>
     */
    inline void SetDirectoryId(Aws::String&& value) { m_directoryIdHasBeenSet = true; m_directoryId = std::move(value); }

    /**
     * <p>Identifier of the directory to which the domain controllers will be added or
     * removed.</p>
     */
    inline void SetDirectoryId(const char* value) { m_directoryIdHasBeenSet = true; m_directoryId.assign(value); }

    /**
     * <p>Identifier of the directory to which the domain controllers will be added or
     * removed.</p>
     */
    inline UpdateNumberOfDomainControllersRequest& WithDirectoryId(const Aws::String& value) { SetDirectoryId(value); return *this;}

    /**
     * <p>Identifier of the directory to which the domain controllers will be added or
     * removed.</p>
     */
    inline UpdateNumberOfDomainControllersRequest& WithDirectoryId(Aws::String&& value) { SetDirectoryId(std::move(value)); return *this;}

    /**
     * <p>Identifier of the directory to which the domain controllers will be added or
     * removed.</p>
     */
    inline UpdateNumberOfDomainControllersRequest& WithDirectoryId(const char* value) { SetDirectoryId(value); return *this;}


    /**
     * <p>The number of domain controllers desired in the directory.</p>
     */
    inline int GetDesiredNumber() const{ return m_desiredNumber; }

    /**
     * <p>The number of domain controllers desired in the directory.</p>
     */
    inline bool DesiredNumberHasBeenSet() const { return m_desiredNumberHasBeenSet; }

    /**
     * <p>The number of domain controllers desired in the directory.</p>
     */
    inline void SetDesiredNumber(int value) { m_desiredNumberHasBeenSet = true; m_desiredNumber = value; }

    /**
     * <p>The number of domain controllers desired in the directory.</p>
     */
    inline UpdateNumberOfDomainControllersRequest& WithDesiredNumber(int value) { SetDesiredNumber(value); return *this;}

  private:

    Aws::String m_directoryId;
    bool m_directoryIdHasBeenSet;

    int m_desiredNumber;
    bool m_desiredNumberHasBeenSet;
  };

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
