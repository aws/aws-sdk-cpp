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
#include <aws/serverlessrepo/ServerlessApplicationRepository_EXPORTS.h>
#include <aws/serverlessrepo/ServerlessApplicationRepositoryRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace ServerlessApplicationRepository
{
namespace Model
{

  /**
   */
  class AWS_SERVERLESSAPPLICATIONREPOSITORY_API UpdateApplicationRequest : public ServerlessApplicationRepositoryRequest
  {
  public:
    UpdateApplicationRequest();
    
    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateApplication"; }

    Aws::String SerializePayload() const override;


    /**
     * The id of the application to update
     */
    inline const Aws::String& GetApplicationId() const{ return m_applicationId; }

    /**
     * The id of the application to update
     */
    inline void SetApplicationId(const Aws::String& value) { m_applicationIdHasBeenSet = true; m_applicationId = value; }

    /**
     * The id of the application to update
     */
    inline void SetApplicationId(Aws::String&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::move(value); }

    /**
     * The id of the application to update
     */
    inline void SetApplicationId(const char* value) { m_applicationIdHasBeenSet = true; m_applicationId.assign(value); }

    /**
     * The id of the application to update
     */
    inline UpdateApplicationRequest& WithApplicationId(const Aws::String& value) { SetApplicationId(value); return *this;}

    /**
     * The id of the application to update
     */
    inline UpdateApplicationRequest& WithApplicationId(Aws::String&& value) { SetApplicationId(std::move(value)); return *this;}

    /**
     * The id of the application to update
     */
    inline UpdateApplicationRequest& WithApplicationId(const char* value) { SetApplicationId(value); return *this;}


    /**
     * The name of the author publishing the app.\nMin Length=1. Max
     * Length=127.\nPattern "^[a-z0-9](([a-z0-9]|-(?!-))*[a-z0-9])?$";
     */
    inline const Aws::String& GetAuthor() const{ return m_author; }

    /**
     * The name of the author publishing the app.\nMin Length=1. Max
     * Length=127.\nPattern "^[a-z0-9](([a-z0-9]|-(?!-))*[a-z0-9])?$";
     */
    inline void SetAuthor(const Aws::String& value) { m_authorHasBeenSet = true; m_author = value; }

    /**
     * The name of the author publishing the app.\nMin Length=1. Max
     * Length=127.\nPattern "^[a-z0-9](([a-z0-9]|-(?!-))*[a-z0-9])?$";
     */
    inline void SetAuthor(Aws::String&& value) { m_authorHasBeenSet = true; m_author = std::move(value); }

    /**
     * The name of the author publishing the app.\nMin Length=1. Max
     * Length=127.\nPattern "^[a-z0-9](([a-z0-9]|-(?!-))*[a-z0-9])?$";
     */
    inline void SetAuthor(const char* value) { m_authorHasBeenSet = true; m_author.assign(value); }

    /**
     * The name of the author publishing the app.\nMin Length=1. Max
     * Length=127.\nPattern "^[a-z0-9](([a-z0-9]|-(?!-))*[a-z0-9])?$";
     */
    inline UpdateApplicationRequest& WithAuthor(const Aws::String& value) { SetAuthor(value); return *this;}

    /**
     * The name of the author publishing the app.\nMin Length=1. Max
     * Length=127.\nPattern "^[a-z0-9](([a-z0-9]|-(?!-))*[a-z0-9])?$";
     */
    inline UpdateApplicationRequest& WithAuthor(Aws::String&& value) { SetAuthor(std::move(value)); return *this;}

    /**
     * The name of the author publishing the app.\nMin Length=1. Max
     * Length=127.\nPattern "^[a-z0-9](([a-z0-9]|-(?!-))*[a-z0-9])?$";
     */
    inline UpdateApplicationRequest& WithAuthor(const char* value) { SetAuthor(value); return *this;}


    /**
     * The description of the application.\nMin Length=1. Max Length=256
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * The description of the application.\nMin Length=1. Max Length=256
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * The description of the application.\nMin Length=1. Max Length=256
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * The description of the application.\nMin Length=1. Max Length=256
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * The description of the application.\nMin Length=1. Max Length=256
     */
    inline UpdateApplicationRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * The description of the application.\nMin Length=1. Max Length=256
     */
    inline UpdateApplicationRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * The description of the application.\nMin Length=1. Max Length=256
     */
    inline UpdateApplicationRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * Labels to improve discovery of apps in search results.\nMin Length=1. Max
     * Length=127. Maximum number of labels: 10\nPattern: "^[a-zA-Z0-9+\\-_:\\/@]+$";
     */
    inline const Aws::Vector<Aws::String>& GetLabels() const{ return m_labels; }

    /**
     * Labels to improve discovery of apps in search results.\nMin Length=1. Max
     * Length=127. Maximum number of labels: 10\nPattern: "^[a-zA-Z0-9+\\-_:\\/@]+$";
     */
    inline void SetLabels(const Aws::Vector<Aws::String>& value) { m_labelsHasBeenSet = true; m_labels = value; }

    /**
     * Labels to improve discovery of apps in search results.\nMin Length=1. Max
     * Length=127. Maximum number of labels: 10\nPattern: "^[a-zA-Z0-9+\\-_:\\/@]+$";
     */
    inline void SetLabels(Aws::Vector<Aws::String>&& value) { m_labelsHasBeenSet = true; m_labels = std::move(value); }

    /**
     * Labels to improve discovery of apps in search results.\nMin Length=1. Max
     * Length=127. Maximum number of labels: 10\nPattern: "^[a-zA-Z0-9+\\-_:\\/@]+$";
     */
    inline UpdateApplicationRequest& WithLabels(const Aws::Vector<Aws::String>& value) { SetLabels(value); return *this;}

    /**
     * Labels to improve discovery of apps in search results.\nMin Length=1. Max
     * Length=127. Maximum number of labels: 10\nPattern: "^[a-zA-Z0-9+\\-_:\\/@]+$";
     */
    inline UpdateApplicationRequest& WithLabels(Aws::Vector<Aws::String>&& value) { SetLabels(std::move(value)); return *this;}

    /**
     * Labels to improve discovery of apps in search results.\nMin Length=1. Max
     * Length=127. Maximum number of labels: 10\nPattern: "^[a-zA-Z0-9+\\-_:\\/@]+$";
     */
    inline UpdateApplicationRequest& AddLabels(const Aws::String& value) { m_labelsHasBeenSet = true; m_labels.push_back(value); return *this; }

    /**
     * Labels to improve discovery of apps in search results.\nMin Length=1. Max
     * Length=127. Maximum number of labels: 10\nPattern: "^[a-zA-Z0-9+\\-_:\\/@]+$";
     */
    inline UpdateApplicationRequest& AddLabels(Aws::String&& value) { m_labelsHasBeenSet = true; m_labels.push_back(std::move(value)); return *this; }

    /**
     * Labels to improve discovery of apps in search results.\nMin Length=1. Max
     * Length=127. Maximum number of labels: 10\nPattern: "^[a-zA-Z0-9+\\-_:\\/@]+$";
     */
    inline UpdateApplicationRequest& AddLabels(const char* value) { m_labelsHasBeenSet = true; m_labels.push_back(value); return *this; }


    /**
     * A raw text Readme file that contains a more detailed description of the
     * application and how it works in markdown language.\nMax size 5 MB
     */
    inline const Aws::String& GetReadmeBody() const{ return m_readmeBody; }

    /**
     * A raw text Readme file that contains a more detailed description of the
     * application and how it works in markdown language.\nMax size 5 MB
     */
    inline void SetReadmeBody(const Aws::String& value) { m_readmeBodyHasBeenSet = true; m_readmeBody = value; }

    /**
     * A raw text Readme file that contains a more detailed description of the
     * application and how it works in markdown language.\nMax size 5 MB
     */
    inline void SetReadmeBody(Aws::String&& value) { m_readmeBodyHasBeenSet = true; m_readmeBody = std::move(value); }

    /**
     * A raw text Readme file that contains a more detailed description of the
     * application and how it works in markdown language.\nMax size 5 MB
     */
    inline void SetReadmeBody(const char* value) { m_readmeBodyHasBeenSet = true; m_readmeBody.assign(value); }

    /**
     * A raw text Readme file that contains a more detailed description of the
     * application and how it works in markdown language.\nMax size 5 MB
     */
    inline UpdateApplicationRequest& WithReadmeBody(const Aws::String& value) { SetReadmeBody(value); return *this;}

    /**
     * A raw text Readme file that contains a more detailed description of the
     * application and how it works in markdown language.\nMax size 5 MB
     */
    inline UpdateApplicationRequest& WithReadmeBody(Aws::String&& value) { SetReadmeBody(std::move(value)); return *this;}

    /**
     * A raw text Readme file that contains a more detailed description of the
     * application and how it works in markdown language.\nMax size 5 MB
     */
    inline UpdateApplicationRequest& WithReadmeBody(const char* value) { SetReadmeBody(value); return *this;}


    /**
     * A link to the Readme file that contains a more detailed description of the
     * application and how it works in markdown language.\nMax size 5 MB
     */
    inline const Aws::String& GetReadmeUrl() const{ return m_readmeUrl; }

    /**
     * A link to the Readme file that contains a more detailed description of the
     * application and how it works in markdown language.\nMax size 5 MB
     */
    inline void SetReadmeUrl(const Aws::String& value) { m_readmeUrlHasBeenSet = true; m_readmeUrl = value; }

    /**
     * A link to the Readme file that contains a more detailed description of the
     * application and how it works in markdown language.\nMax size 5 MB
     */
    inline void SetReadmeUrl(Aws::String&& value) { m_readmeUrlHasBeenSet = true; m_readmeUrl = std::move(value); }

    /**
     * A link to the Readme file that contains a more detailed description of the
     * application and how it works in markdown language.\nMax size 5 MB
     */
    inline void SetReadmeUrl(const char* value) { m_readmeUrlHasBeenSet = true; m_readmeUrl.assign(value); }

    /**
     * A link to the Readme file that contains a more detailed description of the
     * application and how it works in markdown language.\nMax size 5 MB
     */
    inline UpdateApplicationRequest& WithReadmeUrl(const Aws::String& value) { SetReadmeUrl(value); return *this;}

    /**
     * A link to the Readme file that contains a more detailed description of the
     * application and how it works in markdown language.\nMax size 5 MB
     */
    inline UpdateApplicationRequest& WithReadmeUrl(Aws::String&& value) { SetReadmeUrl(std::move(value)); return *this;}

    /**
     * A link to the Readme file that contains a more detailed description of the
     * application and how it works in markdown language.\nMax size 5 MB
     */
    inline UpdateApplicationRequest& WithReadmeUrl(const char* value) { SetReadmeUrl(value); return *this;}

  private:

    Aws::String m_applicationId;
    bool m_applicationIdHasBeenSet;

    Aws::String m_author;
    bool m_authorHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    Aws::Vector<Aws::String> m_labels;
    bool m_labelsHasBeenSet;

    Aws::String m_readmeBody;
    bool m_readmeBodyHasBeenSet;

    Aws::String m_readmeUrl;
    bool m_readmeUrlHasBeenSet;
  };

} // namespace Model
} // namespace ServerlessApplicationRepository
} // namespace Aws
