/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/glue/model/CodeGenNodeArg.h>
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
namespace Glue
{
namespace Model
{

  /**
   * <p>The location of resources.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/Location">AWS API
   * Reference</a></p>
   */
  class Location
  {
  public:
    AWS_GLUE_API Location() = default;
    AWS_GLUE_API Location(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Location& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A JDBC location.</p>
     */
    inline const Aws::Vector<CodeGenNodeArg>& GetJdbc() const { return m_jdbc; }
    inline bool JdbcHasBeenSet() const { return m_jdbcHasBeenSet; }
    template<typename JdbcT = Aws::Vector<CodeGenNodeArg>>
    void SetJdbc(JdbcT&& value) { m_jdbcHasBeenSet = true; m_jdbc = std::forward<JdbcT>(value); }
    template<typename JdbcT = Aws::Vector<CodeGenNodeArg>>
    Location& WithJdbc(JdbcT&& value) { SetJdbc(std::forward<JdbcT>(value)); return *this;}
    template<typename JdbcT = CodeGenNodeArg>
    Location& AddJdbc(JdbcT&& value) { m_jdbcHasBeenSet = true; m_jdbc.emplace_back(std::forward<JdbcT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An Amazon Simple Storage Service (Amazon S3) location.</p>
     */
    inline const Aws::Vector<CodeGenNodeArg>& GetS3() const { return m_s3; }
    inline bool S3HasBeenSet() const { return m_s3HasBeenSet; }
    template<typename S3T = Aws::Vector<CodeGenNodeArg>>
    void SetS3(S3T&& value) { m_s3HasBeenSet = true; m_s3 = std::forward<S3T>(value); }
    template<typename S3T = Aws::Vector<CodeGenNodeArg>>
    Location& WithS3(S3T&& value) { SetS3(std::forward<S3T>(value)); return *this;}
    template<typename S3T = CodeGenNodeArg>
    Location& AddS3(S3T&& value) { m_s3HasBeenSet = true; m_s3.emplace_back(std::forward<S3T>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An Amazon DynamoDB table location.</p>
     */
    inline const Aws::Vector<CodeGenNodeArg>& GetDynamoDB() const { return m_dynamoDB; }
    inline bool DynamoDBHasBeenSet() const { return m_dynamoDBHasBeenSet; }
    template<typename DynamoDBT = Aws::Vector<CodeGenNodeArg>>
    void SetDynamoDB(DynamoDBT&& value) { m_dynamoDBHasBeenSet = true; m_dynamoDB = std::forward<DynamoDBT>(value); }
    template<typename DynamoDBT = Aws::Vector<CodeGenNodeArg>>
    Location& WithDynamoDB(DynamoDBT&& value) { SetDynamoDB(std::forward<DynamoDBT>(value)); return *this;}
    template<typename DynamoDBT = CodeGenNodeArg>
    Location& AddDynamoDB(DynamoDBT&& value) { m_dynamoDBHasBeenSet = true; m_dynamoDB.emplace_back(std::forward<DynamoDBT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<CodeGenNodeArg> m_jdbc;
    bool m_jdbcHasBeenSet = false;

    Aws::Vector<CodeGenNodeArg> m_s3;
    bool m_s3HasBeenSet = false;

    Aws::Vector<CodeGenNodeArg> m_dynamoDB;
    bool m_dynamoDBHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
