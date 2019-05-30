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
#include <aws/kafka/Kafka_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
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
namespace Kafka
{
namespace Model
{

  /**
   * 
            <p>Describes a configuration revision.</p>
         <p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/ConfigurationRevision">AWS
   * API Reference</a></p>
   */
  class AWS_KAFKA_API ConfigurationRevision
  {
  public:
    ConfigurationRevision();
    ConfigurationRevision(Aws::Utils::Json::JsonView jsonValue);
    ConfigurationRevision& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * 
            <p>The time when the configuration revision was created.</p>
      
     *   
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * 
            <p>The time when the configuration revision was created.</p>
      
     *   
     */
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }

    /**
     * 
            <p>The time when the configuration revision was created.</p>
      
     *   
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * 
            <p>The time when the configuration revision was created.</p>
      
     *   
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }

    /**
     * 
            <p>The time when the configuration revision was created.</p>
      
     *   
     */
    inline ConfigurationRevision& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * 
            <p>The time when the configuration revision was created.</p>
      
     *   
     */
    inline ConfigurationRevision& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * 
            <p>The description of the configuration revision.</p>
         
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * 
            <p>The description of the configuration revision.</p>
         
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * 
            <p>The description of the configuration revision.</p>
         
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * 
            <p>The description of the configuration revision.</p>
         
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * 
            <p>The description of the configuration revision.</p>
         
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * 
            <p>The description of the configuration revision.</p>
         
     */
    inline ConfigurationRevision& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * 
            <p>The description of the configuration revision.</p>
         
     */
    inline ConfigurationRevision& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * 
            <p>The description of the configuration revision.</p>
         
     */
    inline ConfigurationRevision& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * 
            <p>The revision number.</p>
         
     */
    inline long long GetRevision() const{ return m_revision; }

    /**
     * 
            <p>The revision number.</p>
         
     */
    inline bool RevisionHasBeenSet() const { return m_revisionHasBeenSet; }

    /**
     * 
            <p>The revision number.</p>
         
     */
    inline void SetRevision(long long value) { m_revisionHasBeenSet = true; m_revision = value; }

    /**
     * 
            <p>The revision number.</p>
         
     */
    inline ConfigurationRevision& WithRevision(long long value) { SetRevision(value); return *this;}

  private:

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    long long m_revision;
    bool m_revisionHasBeenSet;
  };

} // namespace Model
} // namespace Kafka
} // namespace Aws
